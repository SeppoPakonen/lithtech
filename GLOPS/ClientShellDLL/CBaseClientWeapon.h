#ifndef CBASECLIENTWEAPON_H
#define CBASECLIENTWEAPON_H

#include "ltbasedefs.h"

// Reconstructed Base Class for Weapons
// VTable at 0x100b8444
class CBaseClientWeapon {
public:
    CBaseClientWeapon();
    virtual ~CBaseClientWeapon();

    // Virtual methods identified in 0x100b8444
    virtual void BaseMethod_1();
    virtual void BaseMethod_2();

protected:
    // Members identified from 100083e0
    uint32 m_nWeaponId;        // offset 0x0c
    uint32 m_nAmmoCount;      // offset 0x18
    float m_fScale;           // offset 0x20
};

#endif // CBASECLIENTWEAPON_H
