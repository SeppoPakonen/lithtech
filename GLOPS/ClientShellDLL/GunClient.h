#ifndef GUNCLIENT_H
#define GUNCLIENT_H

#include "CBaseClientWeapon.h"
#include "ltbasedefs.h"

// Reconstructed GunClient class
class GunClient : public CBaseClientWeapon {
public:
    GunClient();
    virtual ~GunClient();

    virtual void Init();            // 1007b8c0
    virtual void Term();
    virtual void OnModelKey();
    virtual void Update();          // 1007cf90
    virtual void PullTrigger();     // 1007c760
    virtual void ReleaseTrigger();
    virtual void OtherPlayerShoot(void* hMessage);
    
    // Internal Methods
    virtual void Fire();            // 1007c770 (VTable offset 0x6c)
    void UpdateVisibleAmmo();       // 1007e130

protected:
    uint32 m_pViewObject;          // +0x04
    // ...
    uint32 m_pWeaponModel;         // +0x14
    uint32 m_nAmmoType;            // +0x18
    
    char pad1[0x18];
    bool m_bCanFireAlt;            // +0x34?
    bool m_bHasSecondary;          // +0x35?
    bool m_bIsFiringSecondary;     // +0x36?
    
    char pad2[0x10];
    uint32 m_nFiringMode;          // +0x48 (0=Single, 1=FullAuto, 2=Burst?)
    uint32 m_nBurstCount;          // +0x4c
    
    char pad3[0x2c];
    uint32 m_nStateFlags;          // +0x7c
    
    char pad4[0x30];
    uint32 m_nDryFireSound;        // +0xb0
    uint32 m_nFireSound;           // +0xb4
    uint32 m_nFireSoundAlt;        // +0xb8
    
    char pad5[0x28];
    bool m_bState130;              // +0x130
    bool m_bState131;              // +0x131
    bool m_bState132;              // +0x132
    bool m_bState133;              // +0x133
    
    char pad6[0x60];
    bool m_bState194;              // +0x194
    bool m_bState198;              // +0x198
    
    char pad7[0x4f];
    bool m_bFiring;                // +0x1e8
    bool m_bCanFire;               // +0x1e9
};

class WeaponClass_0x20 : public GunClient {
public:
    virtual void OtherPlayerShoot(void* hMessage) override;
    void OtherPlayerShoot_Type4(void* hMessage); // 0x1009c450
    void OtherPlayerShoot_Type5(void* hMessage); // 0x1009c4c0
    void OtherPlayerShoot_Type6(void* hMessage); // 0x1009c530
    void OtherPlayerShoot_Type2(void* hMessage); // 0x10019c00
    void Reset_0x20();                           // 0x1009c520
};

class WeaponClass_0x8a0 : public GunClient {
public:
    virtual void OtherPlayerShoot(void* hMessage) override;
    void OtherPlayerShoot_Type1(void* hMessage); // 0x10019b90
    void OtherPlayerShoot_Type3(void* hMessage); // 0x10019c70
    void Reset_0x8a0();                          // 0x10019c60
};

#endif // GUNCLIENT_H
