#ifndef WEAPONATTRIBUTES_H
#define WEAPONATTRIBUTES_H

#include "ltbasedefs.h"

// Reconstructed Weapon Attribute structure
// Total size: 364 bytes (0x16C)
struct WeaponAttributes {
    uint32 flags;            // 0x000 (Bit 0x10000: Hand skins, 0x1000000: Scale?)
    uint32 type;             // 0x004 (Compared with 6)
    char szName[32];         // 0x008 (Guessing size)
    
    char pad1[0xD4];         // 0x028 - 0x0FC
    
    float fFireRate;         // 0x100? (Guessing based on typical LithTech)
    float fVal104;           // 0x104 (Used in Init scaling)
    float fVal108;           // 0x108 (Used in Init scaling)
    
    char pad2[0x0C];         // 0x10C - 0x118
    
    uint32 nAmmoCapacity;    // 0x118?
    
    char pad3[0x28];         // 0x11C - 0x144
    
    uint16 nVal144;          // 0x144 (Used in SetupAnimations)
    uint16 nVal146;          // 0x146 (Used in SetupAnimations)
    char pad4[0x08];         // 0x148
    char szSocketName[12];   // 0x154? (Used in SetupAnimations)
    uint32 nVal164;          // 0x164 (Used in SetupAnimations)
    
    char pad5[0x04];         // 0x168 - 0x16C (End)
};

// Global Weapon Manager pointer found at ds:0x1011a134
// Array of weapon attributes at ds:0x1010cf6c
extern WeaponAttributes* g_pWeaponAttributes;

#endif // WEAPONATTRIBUTES_H
