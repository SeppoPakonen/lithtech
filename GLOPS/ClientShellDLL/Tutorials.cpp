#include "../Tutorials.h"
#include "ILTClient.h"
#include <stdio.h>

extern ILTClient* g_pLTClient;

class CButeMgr {
public:
    bool Init(const char* szFilename);
    double GetDouble(const char* szKey);
    int GetInt(const char* szKey);
    int GetInt(const char* szTagName, const char* szAttName);
    void GetString(const char* szTagName, const char* szAttName, char* szDest, int maxLen);
};
extern CButeMgr* g_pButeMgr;

TutorialInfo* Tutorials::s_pTutorials = nullptr;
uint32 Tutorials::s_nNumTutorials = 0;

// 0x10068000
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
    
    s_nNumTutorials = g_pButeMgr->GetInt("NUM_TRAINING");
    
    if (s_nNumTutorials > 0) {
        s_pTutorials = new TutorialInfo[s_nNumTutorials];
        
        for (uint32 i = 0; i < s_nNumTutorials; ++i) {
            char szTag[32];
            sprintf(szTag, "Tutorial%i", i);
            
            g_pButeMgr->GetString(szTag, "title", s_pTutorials[i].title, sizeof(s_pTutorials[i].title));
            s_pTutorials[i].teamID = (uint32)g_pButeMgr->GetInt(szTag, "teamID");
            s_pTutorials[i].specialty = (uint32)g_pButeMgr->GetInt(szTag, "specialty");
            
            g_pButeMgr->GetString(szTag, "primary_weapon", s_pTutorials[i].primary_weapon, sizeof(s_pTutorials[i].primary_weapon));
            g_pButeMgr->GetString(szTag, "primary_weapon_attachment1", s_pTutorials[i].primary_weapon_attachment1, sizeof(s_pTutorials[i].primary_weapon_attachment1));
            g_pButeMgr->GetString(szTag, "primary_weapon_attachment2", s_pTutorials[i].primary_weapon_attachment2, sizeof(s_pTutorials[i].primary_weapon_attachment2));
            g_pButeMgr->GetString(szTag, "primary_weapon_attachment3", s_pTutorials[i].primary_weapon_attachment3, sizeof(s_pTutorials[i].primary_weapon_attachment3));
            
            g_pButeMgr->GetString(szTag, "sidearm", s_pTutorials[i].sidearm, sizeof(s_pTutorials[i].sidearm));
            g_pButeMgr->GetString(szTag, "sidearm_attachment1", s_pTutorials[i].sidearm_attachment1, sizeof(s_pTutorials[i].sidearm_attachment1));
            g_pButeMgr->GetString(szTag, "sidearm_attachment2", s_pTutorials[i].sidearm_attachment2, sizeof(s_pTutorials[i].sidearm_attachment2));
            g_pButeMgr->GetString(szTag, "sidearm_attachment3", s_pTutorials[i].sidearm_attachment3, sizeof(s_pTutorials[i].sidearm_attachment3));
            
            g_pButeMgr->GetString(szTag, "equipment1", s_pTutorials[i].equipment1, sizeof(s_pTutorials[i].equipment1));
            g_pButeMgr->GetString(szTag, "equipment2", s_pTutorials[i].equipment2, sizeof(s_pTutorials[i].equipment2));
            g_pButeMgr->GetString(szTag, "equipment3", s_pTutorials[i].equipment3, sizeof(s_pTutorials[i].equipment3));
            
            g_pButeMgr->GetString(szTag, "mapname", s_pTutorials[i].mapname, sizeof(s_pTutorials[i].mapname));
        }
    }
}
