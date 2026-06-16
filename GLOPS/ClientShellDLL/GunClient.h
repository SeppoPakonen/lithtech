#ifndef GUNCLIENT_H
#define GUNCLIENT_H

#include "CBaseClientWeapon.h"
#include "ltbasedefs.h"

// Reconstructed GunClient class based on Phase 3 research
class GunClient : public CBaseClientWeapon {
public:
    GunClient();
    virtual ~GunClient(); // 1007e0e0 (VTable[0])

    // Virtual Methods (Mapped from VTable at 0x100bcb64)
    virtual void Init();            // 1007b8c0
    virtual void Term();
    virtual void OnModelKey();
    virtual void Update();          // Likely 1007cf90 or similar
    virtual void PullTrigger();     // 1007c760
    virtual void ReleaseTrigger();

    // Reconstructed State Logic
    void ClientInitGun();           // 1007c25f
    
private:
    // Memory Map discovered from constructor 1007b717
    // Object Size: Approx 0x1F0 bytes
    
    // Member Variables
    uint32 m_pViewObject;          // offset 0x04?
    LTVector m_vBarrelTip;         // Identified by string references in Init
    
    // State Flags (offsets from constructor)
    bool m_bFiring;                // offset 0x1e8?
    bool m_bCanFire;               // offset 0x1e9?
    
    // Weapon Stats
    float m_fRecoil;               // offset 0x1b0? (initialized to 1.0)
    float m_fSpread;               // offset 0x1c8? (initialized to 1.0)
};

#endif // GUNCLIENT_H
