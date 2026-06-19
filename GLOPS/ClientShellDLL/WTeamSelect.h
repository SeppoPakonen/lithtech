#ifndef WTEAMSELECT_H
#define WTEAMSELECT_H

#include "ltbasedefs.h"

class TeamObject {
public:
    uint32 m_pad[12];     // 0x00 to 0x30
    uint32 m_nStateFlags; // 0x30
    uint32 m_nTeamId;     // 0x34
    uint32 m_pad38[73];   // 0x38 to 0x158
    void* m_pProperty158; // 0x158 (Player list or similar)
    uint32 m_nState160;   // 0x160
    uint32 m_pad164[6];   // 0x164 to 0x17C
    uint32 m_nState17C;   // 0x17C
};

class WTeamSelect {
public:
    WTeamSelect();
    virtual ~WTeamSelect();

    bool CanJoinTeam(int teamId); // 0x1006d480

protected:
    uint32 m_pad[11];     // 0x00 to 0x2C
    uint32 m_nCurrentTeam;// 0x2C
    uint32 m_nNumTeams;   // 0x30
    uint32 m_pad34[8];    // 0x34 to 0x54
    TeamObject* m_apTeams[32]; // 0x54 array of teams
};

#endif // WTEAMSELECT_H
