#include "PlayerList.h"
#include "ILTClient.h"
#include <stdio.h>

extern ILTClient* g_pLTClient;

// UI control methods
class CUIList {
public:
    void Clear();
    int AddRow();
    void SetItemText(int row, int col, const char* text);
    int GetNumRows();
};

class CUIStaticText {
public:
    void SetText(const char* text);
};

class CServerInfo {
public:
    char* GetProperty(const char* key);
    int GetIntProperty(const char* key);
};

PlayerList::PlayerList() {
    m_pServer = nullptr;
    m_pPlayerListCtrl = nullptr;
    m_pColNumPlayers = nullptr;
    m_pColHostname = nullptr;
    m_pColGameVer = nullptr;
    m_pColMapName = nullptr;
    m_pColAdmin = nullptr;
    m_pColEmail = nullptr;
    m_pColTimeLeft = nullptr;
    m_pColMaxPlayers = nullptr;
    m_pColPlayerName = nullptr;
}

PlayerList::~PlayerList() {
    // UI elements are managed by the GUI manager in LithTech, so we typically do not delete them here.
}

// 0x100654f0
void PlayerList::AddPlayer() {
    if (!m_pServer) {
        if (m_pPlayerListCtrl) {
             ((CUIList*)m_pPlayerListCtrl)->Clear();
        }
        if (m_pColHostname) ((CUIStaticText*)m_pColHostname)->SetText("");
        if (m_pColGameVer) ((CUIStaticText*)m_pColGameVer)->SetText("");
        if (m_pColMaxPlayers) ((CUIStaticText*)m_pColMaxPlayers)->SetText("");
        if (m_pColMapName) ((CUIStaticText*)m_pColMapName)->SetText("");
        if (m_pColAdmin) ((CUIStaticText*)m_pColAdmin)->SetText("");
        if (m_pColEmail) ((CUIStaticText*)m_pColEmail)->SetText("");
        if (m_pColTimeLeft) ((CUIStaticText*)m_pColTimeLeft)->SetText("");
        if (m_pColNumPlayers) ((CUIStaticText*)m_pColNumPlayers)->SetText("");
        return;
    }
    
    CServerInfo* pServer = (CServerInfo*)m_pServer;
    CUIList* pList = (CUIList*)m_pPlayerListCtrl;
    
    int numPlayers = pServer->GetIntProperty("numplayers");
    
    if (pList) {
        pList->Clear();
    }
    
    for (int i = 0; i < numPlayers; ++i) {
        char szKey[32];
        sprintf(szKey, "player_%i", i);
        const char* playerName = pServer->GetProperty(szKey);
        
        if (!playerName) {
            playerName = "";
        }
        
        if (pList) {
            int row = pList->AddRow();
            if (row >= 24) {
                // Max rows reached (0x18)
                if (g_pLTClient) {
                    g_pLTClient->CPrint("PlayerList::AddPlayer: Max rows reached (%i)", 24);
                }
                continue;
            }
            
            pList->SetItemText(row, 0, playerName);
        }
    }
    
    char szBuffer[256];
    
    if (m_pColHostname) {
        ((CUIStaticText*)m_pColHostname)->SetText(pServer->GetProperty("hostname"));
    }
    
    if (m_pColGameVer) {
        ((CUIStaticText*)m_pColGameVer)->SetText(pServer->GetProperty("gamever"));
    }
    
    if (m_pColMapName) {
        ((CUIStaticText*)m_pColMapName)->SetText(pServer->GetProperty("mapname"));
    }
    
    if (m_pColAdmin) {
        ((CUIStaticText*)m_pColAdmin)->SetText(pServer->GetProperty("admin"));
    }
    
    if (m_pColEmail) {
        ((CUIStaticText*)m_pColEmail)->SetText(pServer->GetProperty("email"));
    }
    
    if (m_pColTimeLeft) {
        ((CUIStaticText*)m_pColTimeLeft)->SetText(pServer->GetProperty("timeleft"));
    }
    
    if (m_pColMaxPlayers) {
        const char* maxPlayersStr = pServer->GetProperty("maxplayers");
        const char* numPlayersStr = pServer->GetProperty("numplayers");
        sprintf(szBuffer, "%s / %s", numPlayersStr, maxPlayersStr);
        ((CUIStaticText*)m_pColMaxPlayers)->SetText(szBuffer);
    }
    
    if (m_pColNumPlayers) {
        sprintf(szBuffer, "%s:%i", pServer->GetProperty("hostname"), pServer->GetIntProperty("hostport"));
        ((CUIStaticText*)m_pColNumPlayers)->SetText(szBuffer);
    }
}
