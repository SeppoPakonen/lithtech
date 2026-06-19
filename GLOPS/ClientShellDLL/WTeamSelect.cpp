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
    if (teamId == -1) return true; // -1 indicates spectator/unassigned, usually always allowed
    
    if (teamId < 0 || teamId >= (int)m_nNumTeams) {
        g_pLTClient->CPrint("WTeamSelect::CanJoinTeam: Invalid teamId %i", teamId);
        return false; // Jump to end false branch
    }
    
    TeamObject* pTeam = m_apTeams[teamId];
    if (!pTeam) return false;
    
    uint32 playerCount = GetTeamPlayerCount(pTeam->m_pProperty158);
    uint32 maxPlayers = GetTeamMaxPlayers(pTeam->m_nTeamId);
    
    if (maxPlayers != 0 && playerCount >= maxPlayers) {
        // g_pLTClient->CPrint("Team is full!");
        return false;
    }
    
    // Some internal state logic setting (from 1006d529 onward)
    if (m_nCurrentTeam != 0xFFFFFFFF) {
        TeamObject* pCurrent = m_apTeams[m_nCurrentTeam];
        if (pCurrent) {
            // Update state flags for the previous team
            pCurrent->m_nStateFlags &= ~1;
            // Abstracted state updates
            pCurrent->m_nState160 = 0;
            pCurrent->m_nState17C = 0;
        }
    }
    
    // Select the new team
    pTeam->m_nStateFlags |= 1;
    m_nCurrentTeam = teamId;
    
    return true;
}
