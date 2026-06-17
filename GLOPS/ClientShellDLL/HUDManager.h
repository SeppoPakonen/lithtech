#ifndef HUDMANAGER_H
#define HUDMANAGER_H

#include "ILTClient.h"

class CHUDMgr {
public:
    // 0x10014240: Loads equipsounds.txt
    void LoadEquipSounds();
    
    // 0x10014440: Loads gunsounds.txt
    void LoadGunSounds();

    // 0x10014130: Term
    void Term();

private:
    // Member layout to be determined
};

extern CHUDMgr* g_pHUDMgr; // ds:0x101138d0

#endif // HUDMANAGER_H
