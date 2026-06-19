#ifndef WTEAMSELECT_H
#define WTEAMSELECT_H

#include "ltbasedefs.h"

// Forward declarations or dummy types for team and client managers
class TeamObject {
public:
    uint32 m_nTeamId;      // offset 0x34
    uint32 m_nNumPlayers;  // offset 0x30?
    // Nested client team pointer or property at offset 0x158
    void* m_pProperty158;  // offset 0x158
};

class WTeamSelect {
public:
    WTeamSelect();
    virtual ~WTeamSelect();

    bool CanJoinTeam(uint32 teamId);        // 0x1006d480
    bool CanJoinTeam();                     // 0x1006db20
    int GetNextAvailableTeam(int direction); // 0x1006db41

protected:
    uint32 m_pad[10];                       // offsets 0x04 to 0x28
    uint32 m_nCurrentTeam;                  // offset 0x2c
    uint32 m_nNumTeams;                     // offset 0x30
    TeamObject* m_apTeams[8];               // offsets starting at 0x54
};

#endif // WTEAMSELECT_H
