#ifndef SINGLEPLAYERMENU_H
#define SINGLEPLAYERMENU_H

#include "ltbasedefs.h"

struct SPMissionInfo {
    char szName[64];
    char szDescription[256];
    char szMap[64];
    int nDifficulty;
};

class SinglePlayerMenu {
public:
    SinglePlayerMenu();
    virtual ~SinglePlayerMenu();

    static void LoadSPMissions(); // 0x10067c40

    static SPMissionInfo* s_pMissions;
    static uint32 s_nNumMissions;
};

#endif // SINGLEPLAYERMENU_H
