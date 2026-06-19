#include "PlayerList.h"
#include "ILTClient.h"
#include <stdio.h>

extern ILTClient* g_pLTClient;

// Abstracted UI control methods
class CUIList {
public:
    void AddRow();
    void SetItemText(int row, int col, const char* text);
    int GetNumRows();
};

class CServerInfo {
public:
    char* GetProperty(const char* key);
    int GetIntProperty(const char* key);
};

PlayerList::PlayerList() {
}

PlayerList::~PlayerList() {
}

// 0x100654f0
void PlayerList::AddPlayer() {
    if (!m_pServer) {
        // Fallback or clear if no server selected
        // 100657a6 block calls multiple UI clear methods for the info columns
        if (m_pPlayerListCtrl) {
            // ((CUIList*)m_pPlayerListCtrl)->Clear();
        }
        return;
    }
    
    CServerInfo* pServer = (CServerInfo*)m_pServer;
    CUIList* pList = (CUIList*)m_pPlayerListCtrl;
    
    int numPlayers = pServer->GetIntProperty("numplayers");
    int maxPlayers = pServer->GetIntProperty("maxplayers");
    
    // Abstracted: Iterate players or update the server info UI panel
    // The assembly block updates hostname, gamever, mapname, admin, email, timeleft, maxplayers
    
    char szBuffer[256];
    
    if (m_pColHostname) {
        sprintf(szBuffer, "%s:%i", pServer->GetProperty("hostname"), pServer->GetIntProperty("hostport"));
        // Set UI text
    }
    
    if (m_pColGameVer) {
        const char* ver = pServer->GetProperty("gamever");
        // Set UI text
    }
    
    if (m_pColMapName) {
        const char* map = pServer->GetProperty("mapname");
        // Set UI text
    }
    
    if (m_pColAdmin) {
        const char* admin = pServer->GetProperty("admin");
        // Set UI text
    }
    
    if (m_pColEmail) {
        const char* email = pServer->GetProperty("email");
        // Set UI text
    }
    
    if (m_pColTimeLeft) {
        const char* timeleft = pServer->GetProperty("timeleft");
        // Set UI text
    }
    
    if (m_pColNumPlayers) {
        sprintf(szBuffer, "%i / %i", numPlayers, maxPlayers);
        // Set UI text
    }
    
    // 100655d5: Loop over numPlayers to populate the m_pPlayerListCtrl
    for (int i = 0; i < numPlayers; ++i) {
        char szKey[32];
        sprintf(szKey, "player_%i", i);
        const char* playerName = pServer->GetProperty(szKey);
        
        if (playerName) {
            // pList->AddRow();
            // pList->SetItemText(row, col, playerName);
        }
    }
}
