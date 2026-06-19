#include "Tutorials.h"
#include "ILTClient.h"
#include <stdio.h>

extern ILTClient* g_pLTClient;

TutorialInfo* Tutorials::s_pTutorials = nullptr;
uint32 Tutorials::s_nNumTutorials = 0;

// Placeholder ButeMgr implementation
class CButeMgr {
public:
    bool Init(const char* szFilename);
    double GetDouble(const char* szKey);
    int GetInt(const char* szKey);
    void GetString(const char* szKey, char* szDest, int maxLen);
};
extern CButeMgr* g_pButeMgr;

// 0x10068800
void Tutorials::LoadTutorials() {
    const char* szFilename = "globalops\\attributes\\tutorials.txt";
    
    if (!g_pButeMgr) return;
    
    bool bLoaded = g_pButeMgr->Init(szFilename);
    
    if (!bLoaded) {
        g_pLTClient->CPrint("Tutorials::LoadTutorials: Couldn't open \"%s\" for reading", szFilename);
        return;
    }
    
    double fVersion = g_pButeMgr->GetDouble("VERSION");
    
    const double EXPECTED_VERSION = 2.0; 
    
    if (fVersion != EXPECTED_VERSION) {
        g_pLTClient->CPrint("Tutorials::LoadTutorials: \"%s\" is the wrong version (expected %i)", szFilename, (int)EXPECTED_VERSION);
        return;
    }
    
    s_nNumTutorials = g_pButeMgr->GetInt("NUM_TUTORIALS");
    
    if (s_nNumTutorials > 0) {
        s_pTutorials = new TutorialInfo[s_nNumTutorials];
        
        for (uint32 i = 0; i < s_nNumTutorials; ++i) {
            char szTag[32];
            
            sprintf(szTag, "Tutorial%i_Name", i);
            g_pButeMgr->GetString(szTag, s_pTutorials[i].szName, sizeof(s_pTutorials[i].szName));
            
            sprintf(szTag, "Tutorial%i_Desc", i);
            g_pButeMgr->GetString(szTag, s_pTutorials[i].szDescription, sizeof(s_pTutorials[i].szDescription));
            
            sprintf(szTag, "Tutorial%i_Map", i);
            g_pButeMgr->GetString(szTag, s_pTutorials[i].szMap, sizeof(s_pTutorials[i].szMap));
        }
    }
}
