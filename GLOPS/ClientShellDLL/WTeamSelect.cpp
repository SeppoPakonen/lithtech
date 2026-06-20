#include "WTeamSelect.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// Extern engine getters
extern uint32 GetTeamPlayerCount(void* pProperty);
extern uint32 GetTeamMaxPlayers(uint32 teamId);

WTeamSelect::WTeamSelect() {
}

WTeamSelect::~WTeamSelect() {
}

// 0x1006d480
bool WTeamSelect::CanJoinTeam(int teamId) {
    if (teamId != -1) {
        if (teamId < 0 || teamId >= (int)m_nNumTeams) {
            g_pLTClient->CPrint("WTeamSelect::CanJoinTeam : Invalid team id. (%d)", teamId);
            return false;
        }
        
        TeamObject* pTeam = m_apTeams[teamId];
        uint32 playerCount = GetTeamPlayerCount(pTeam->m_pProperty158);
        uint32 maxPlayers = GetTeamMaxPlayers(pTeam->m_nTeamId);
        
        if (maxPlayers != 0 && playerCount >= maxPlayers) {
            return false;
        }
    }

    extern void SendTeamSelect(int teamId);
    SendTeamSelect(teamId);

    if (m_nCurrentTeam != 0xFFFFFFFF) {
        TeamObject* pCurrent = m_apTeams[m_nCurrentTeam];
        if (pCurrent) {
            pCurrent->m_nStateFlags &= ~1;
            
            int state = 0;
            if (pCurrent->m_nStateFlags & 1) {
                state = 1;
            } else {
                uint32 curCount = GetTeamPlayerCount(pCurrent->m_pProperty158);
                uint32 curMax = GetTeamMaxPlayers(pCurrent->m_nTeamId);
                if (curMax != 0 && curCount >= curMax) {
                    state = 2;
                }
            }
            
            if (state != pCurrent->m_nState160) {
                pCurrent->m_nState160 = state;
                pCurrent->m_nState17C = (state == 1) ? 1 : 0;
            }
        }
    }
    
    if (teamId != -1) {
        TeamObject* pTeam = m_apTeams[teamId];
        if (pTeam) {
            pTeam->m_nStateFlags |= 1;
            
            int state = 0;
            if (pTeam->m_nStateFlags & 1) {
                state = 1;
            } else {
                uint32 curCount = GetTeamPlayerCount(pTeam->m_pProperty158);
                uint32 curMax = GetTeamMaxPlayers(pTeam->m_nTeamId);
                if (curMax != 0 && curCount >= curMax) {
                    state = 2;
                }
            }
            
            if (state != pTeam->m_nState160) {
                pTeam->m_nState160 = state;
                pTeam->m_nState17C = (state == 1) ? 1 : 0;
            }
        }
    }
    
    m_nCurrentTeam = teamId;
    
    extern void* GetTeam(int teamId);
    if (teamId != -1) {
        void* pTeamInfo = GetTeam(teamId);
        if (pTeamInfo) {
            char* pName = *(char**)((char*)pTeamInfo + 0x20);
            HSTRING hStr = g_pLTClient->CreateString(pName);
            const char* pData = g_pLTClient->GetStringData(hStr);
            m_pListBox->AddString(-1, pData);
            if (hStr) {
                g_pLTClient->FreeString(hStr);
            }
        }
    } else {
        m_pListBox->AddString(-1, "Spectator");
    }
    
    return true;
}
