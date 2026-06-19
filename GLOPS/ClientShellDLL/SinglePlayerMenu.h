#ifndef SINGLEPLAYERMENU_H
#define SINGLEPLAYERMENU_H

#include "ltbasedefs.h"

class ILTClient;

struct SPMissionInfo {
    char title[64];
    uint32 affiliation;
    uint32 teamID;
    char mapname[64];
};

class SinglePlayerMenu {
public:
    static void LoadSPMissions();

private:
    static SPMissionInfo* s_pMissions;
    static uint32 s_nNumMissions;
};

#endif // SINGLEPLAYERMENU_H
