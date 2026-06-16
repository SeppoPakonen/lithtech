#ifndef WEAPONATTRIBUTES_H
#define WEAPONATTRIBUTES_H

#include "ltbasedefs.h"

// Reconstructed Weapon Attribute structure
// Based on CWeaponMgr patterns in LithTech
struct WeaponAttributes {
    uint32 nId;
    char szName[32];
    
    // Stats observed in GunClient logic
    float fFireRate;
    float fReloadTime;
    float fRecoil;
    float fSpread;
    uint32 nAmmoType;
    uint32 nAmmoCapacity;
    
    // ... further mapping needed ...
};

// Global Weapon Manager pointer found at ds:0x1011a134
// It contains an array or map of weapon attributes.
#endif // WEAPONATTRIBUTES_H
