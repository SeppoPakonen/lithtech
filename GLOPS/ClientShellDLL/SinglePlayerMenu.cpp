#include "SinglePlayerMenu.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

SPMissionInfo* SinglePlayerMenu::s_pMissions = nullptr;
uint32 SinglePlayerMenu::s_nNumMissions = 0;

// Placeholder for ButeMgr (configuration reader)
class CButeMgr {
public:
    bool Init(const char* szFilename);
    double GetDouble(const char* szKey);
    int GetInt(const char* szKey);
    void GetString(const char* szKey, char* szDest, int maxLen);
};
extern CButeMgr* g_pButeMgr;

// 0x10067c40
void SinglePlayerMenu::LoadSPMissions() {
    const char* szFilename = "globalops\\attributes\\singleplayer.txt";
    
    if (!g_pButeMgr) return;
    
    // 0x1000ba30: Init/Load file
    bool bLoaded = g_pButeMgr->Init(szFilename);
    
    if (!bLoaded) {
        g_pLTClient->CPrint("SinglePlayerMenu::LoadSPMissions: Couldn't open \"%s\" for reading", szFilename);
        return;
    }
    
    // 0x1000c000: Read float/double for "VERSION"
    double fVersion = g_pButeMgr->GetDouble("VERSION");
    
    // Expected version in ds:0x100b84c0 (likely 2.0 based on common patterns)
    const double EXPECTED_VERSION = 2.0; 
    
    if (fVersion != EXPECTED_VERSION) {
        g_pLTClient->CPrint("SinglePlayerMenu::LoadSPMissions: \"%s\" is the wrong version (expected %i)", szFilename, (int)EXPECTED_VERSION);
        return;
    }
    
    // 0x10067cfb block logic: Read NUM_SP_MISSIONS and loop
    s_nNumMissions = g_pButeMgr->GetInt("NUM_SP_MISSIONS");
    
    if (s_nNumMissions > 0) {
        s_pMissions = new SPMissionInfo[s_nNumMissions];
        
        for (uint32 i = 0; i < s_nNumMissions; ++i) {
            char szTag[32];
            sprintf(szTag, "Mission%i_Name", i);
            g_pButeMgr->GetString(szTag, s_pMissions[i].szName, sizeof(s_pMissions[i].szName));
            
            sprintf(szTag, "Mission%i_Desc", i);
            g_pButeMgr->GetString(szTag, s_pMissions[i].szDescription, sizeof(s_pMissions[i].szDescription));
            
            sprintf(szTag, "Mission%i_Map", i);
            g_pButeMgr->GetString(szTag, s_pMissions[i].szMap, sizeof(s_pMissions[i].szMap));
            
            sprintf(szTag, "Mission%i_Difficulty", i);
            s_pMissions[i].nDifficulty = g_pButeMgr->GetInt(szTag);
        }
    }
}
