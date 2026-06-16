#ifndef GAMECLIENTSHELL_H
#define GAMECLIENTSHELL_H

#include "IClientShell.h"
#include "ILTClient.h"
#include "MoveMgr.h"
#include "SoundMgr.h"
#include "Specialty.h"

// Reconstructed CGameClientShell structure
// Offsets derived from ds:0x1011a134 and member access patterns

class CGameClientShell : public IClientShell {
public:
    virtual ~CGameClientShell() {}

    // Subsystem Managers (Primary offsets)
    // +0x181c8: CMoveMgr
    // +0x181cc: CPlayerMgr
    // +0x181d0: CCameraMgr
    // +0x183d0: CWeaponMgr (or AttributeMgr)
    // +0x18508: CSoundMgr

    CMoveMgr* GetMoveMgr() { return m_pMoveMgr; }
    CCameraMgr* GetCameraMgr() { return m_pCameraMgr; }
    CSoundMgr* GetSoundMgr() { return m_pSoundMgr; }

private:
    // Pointers and data members
    char pad0[0x4];
    ILTClient* m_pLTClient;      // +0x4
    
    char pad1[0x181c0];          // Padding to 0x181C8
    CMoveMgr* m_pMoveMgr;        // +0x181c8
    void* m_pPlayerMgr;          // +0x181cc
    void* m_pCameraMgr;          // +0x181d0
    
    char pad2[0x200];            // Internal movement state members
    LTVector m_vLastPredictedPos; // +0x182e0 (approx)
    LTRotation m_rLastPredictedRot; // +0x182e8 (approx)
    
    char pad3[0xe8];
    void* m_pWeaponMgr;          // +0x183d0
    
    char pad4[0x138];
    CSoundMgr* m_pSoundMgr;      // +0x18508
};

// Global pointer to the singleton instance
extern CGameClientShell* g_pGameClientShell; // ds:0x1011a134

#endif // GAMECLIENTSHELL_H
