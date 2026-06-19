#include "ClientTeamManager.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// Simulated Bute manager API
class CButeMgr {
public:
    char* GetString(const char* szTag, const char* szKey);
    int GetInt(const char* szTag, const char* szKey);
    bool Exist(const char* szTag, const char* szKey);
};

// Abstract simulated method
extern void* CreateTextureFromName(const char* szName);

ClientTeamManager::ClientTeamManager() {
}

ClientTeamManager::~ClientTeamManager() {
}

// 0x1001f2c0
ClientTeam* ClientTeamManager::AddTeam(void* pMgr, const char* szTeamTag) {
    CButeMgr* pButeMgr = (CButeMgr*)pMgr;
    if (!pButeMgr) return nullptr;

    ClientTeam* pTeam = new ClientTeam();
    if (!pTeam) return nullptr;

    // Zero out pointers and strings
    pTeam->m_szName = nullptr;
    pTeam->m_szAffiliationName = nullptr;
    pTeam->m_szBriefing = nullptr;
    pTeam->m_szDescription = nullptr;
    pTeam->m_szHelpText = nullptr;
    pTeam->m_szCaption1 = nullptr;
    pTeam->m_szCaption2 = nullptr;
    pTeam->m_hDiagram1 = nullptr;
    pTeam->m_hDiagram2 = nullptr;
    pTeam->m_hFlag = nullptr;
    pTeam->m_nTeamID = 0xFFFFFFFF;
    pTeam->m_nAffiliation = 0xFFFFFFFF;

    if (pButeMgr->Exist(szTeamTag, "Name")) {
        pTeam->m_szName = pButeMgr->GetString(szTeamTag, "Name");
    }
    
    if (pButeMgr->Exist(szTeamTag, "Affiliation")) {
        pTeam->m_nAffiliation = pButeMgr->GetInt(szTeamTag, "Affiliation");
    }
    
    if (pButeMgr->Exist(szTeamTag, "AffiliationName")) {
        pTeam->m_szAffiliationName = pButeMgr->GetString(szTeamTag, "AffiliationName");
    }
    
    if (pButeMgr->Exist(szTeamTag, "TeamID")) {
        pTeam->m_nTeamID = pButeMgr->GetInt(szTeamTag, "TeamID");
    }
    
    if (pButeMgr->Exist(szTeamTag, "Briefing")) {
        pTeam->m_szBriefing = pButeMgr->GetString(szTeamTag, "Briefing");
    }
    
    if (pButeMgr->Exist(szTeamTag, "Description")) {
        pTeam->m_szDescription = pButeMgr->GetString(szTeamTag, "Description");
    }
    
    if (pButeMgr->Exist(szTeamTag, "VIPTeam")) {
        pTeam->m_bVIPTeam = pButeMgr->GetInt(szTeamTag, "VIPTeam");
    }
    
    if (pButeMgr->Exist(szTeamTag, "HelpText")) {
        pTeam->m_szHelpText = pButeMgr->GetString(szTeamTag, "HelpText");
    }
    
    if (pButeMgr->Exist(szTeamTag, "Diagram1")) {
        const char* szDiagram = pButeMgr->GetString(szTeamTag, "Diagram1");
        pTeam->m_hDiagram1 = CreateTextureFromName(szDiagram);
        if (!pTeam->m_hDiagram1) {
            g_pLTClient->CPrint("ClientTeamManager::AddTeam: Couldn't load diagram texture \"%s\"", szDiagram);
        }
    }
    
    if (pButeMgr->Exist(szTeamTag, "Diagram2")) {
        const char* szDiagram = pButeMgr->GetString(szTeamTag, "Diagram2");
        pTeam->m_hDiagram2 = CreateTextureFromName(szDiagram);
        if (!pTeam->m_hDiagram2) {
            g_pLTClient->CPrint("ClientTeamManager::AddTeam: Couldn't load diagram texture \"%s\"", szDiagram);
        }
    }
    
    if (pButeMgr->Exist(szTeamTag, "Caption1")) {
        pTeam->m_szCaption1 = pButeMgr->GetString(szTeamTag, "Caption1");
    }
    
    if (pButeMgr->Exist(szTeamTag, "Caption2")) {
        pTeam->m_szCaption2 = pButeMgr->GetString(szTeamTag, "Caption2");
    }
    
    if (pButeMgr->Exist(szTeamTag, "MaxPlayers")) {
        pTeam->m_nMaxPlayers = pButeMgr->GetInt(szTeamTag, "MaxPlayers");
    }
    
    // Attempting to load flag texture (usually "Flag" or similar)
    if (pButeMgr->Exist(szTeamTag, "Flag")) {
        const char* szFlag = pButeMgr->GetString(szTeamTag, "Flag");
        pTeam->m_hFlag = CreateTextureFromName(szFlag);
        if (!pTeam->m_hFlag) {
            g_pLTClient->CPrint("ClientTeamManager::AddTeam: Couldn't load flag texture \"%s\"", szFlag);
        }
    }
    
    return pTeam;
}
