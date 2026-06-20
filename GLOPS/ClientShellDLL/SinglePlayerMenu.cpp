#include "SinglePlayerMenu.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

SPMissionInfo* SinglePlayerMenu::s_pMissions = nullptr;
uint32 SinglePlayerMenu::s_nNumMissions = 0;

// Reconstructed global parser functions from cshell.asm
extern "C" {
    bool Parse_Init(const char* szFilename); // 0x1000ba30
    void Parse_MatchString(const char* szString); // 0x1000c000
    double Parse_ReadDouble(); // 0x1000bb50
    int Parse_ReadInt(); // 0x1000bad0
    void Parse_ReadString(char* szDest); // 0x1000bc70
    void Parse_ReadString2(char* szDest); // 0x1000bd10
    uint32 CreateHSTRING(const char* szString); // 0x100113d0
}

// 0x10067c40
void SinglePlayerMenu::LoadSPMissions() {
    const char* szFilename = "globalops\\attributes\\singleplayer.txt";
    
    // 0x1000ba30: Init/Load file
    bool bLoaded = Parse_Init(szFilename);
    
    if (!bLoaded) {
        g_pLTClient->CPrint("SinglePlayerMenu::LoadSPMissions: Couldn't open \"%s\" for reading", szFilename);
        return;
    }
    
    // 0x1000c000: Read float/double for "VERSION"
    Parse_MatchString("VERSION");
    double fVersion = Parse_ReadDouble(); // 0x1000bb50
    
    // Expected version in ds:0x100b84c0 (likely 2.0 based on common patterns)
    const double EXPECTED_VERSION = 2.0; 
    
    if (fVersion != EXPECTED_VERSION) {
        g_pLTClient->CPrint("SinglePlayerMenu::LoadSPMissions: \"%s\" is the wrong version (expected %i)", szFilename, (int)EXPECTED_VERSION);
        return;
    }
    
    // 0x10067cfb block logic: Read NUM_SP_MISSIONS and loop
    Parse_MatchString("NUM_SP_MISSIONS");
    s_nNumMissions = Parse_ReadInt(); // 0x1000bad0
    
    if (s_nNumMissions > 0) {
        // The struct size in ASM is 72 bytes (0x48).
        // Since the user's header might be inaccurate, we allocate byte array to ensure safety.
        s_pMissions = (SPMissionInfo*)new uint8[s_nNumMissions * 72];
        
        for (uint32 i = 0; i < s_nNumMissions; ++i) {
            uint8* pMission = (uint8*)s_pMissions + (i * 72);
            
            Parse_MatchString("GO_SPMission ");
            Parse_MatchString("{"); // String at 0x100c5124, likely '{' or empty
            
            // Read Mission ID (offset 0)
            pMission[0] = (uint8)Parse_ReadInt(); // 0x1000bad0
            
            Parse_MatchString("title");
            
            char szLocalBuf[256]; // Stack buffer for reading strings
            Parse_ReadString(szLocalBuf); // 0x1000bc70
            
            // Create HSTRING and store at offset 64 (0x40)
            *(uint32*)(pMission + 64) = CreateHSTRING(szLocalBuf); // 0x100113d0
            
            Parse_MatchString("affiliation");
            Parse_ReadString(szLocalBuf); // 0x1000bc70
            
            // Create HSTRING and store at offset 68 (0x44)
            *(uint32*)(pMission + 68) = CreateHSTRING(szLocalBuf); // 0x100113d0
            
            Parse_MatchString("teamID");
            
            // Read Team ID (offset 1)
            pMission[1] = (uint8)Parse_ReadInt(); // 0x1000bad0
            
            Parse_MatchString("mapname"); // String at 0x100dcc98
            
            // Read directly into offset 2 (szMapName)
            Parse_ReadString2((char*)(pMission + 2)); // 0x1000bd10
        }
    }
}
