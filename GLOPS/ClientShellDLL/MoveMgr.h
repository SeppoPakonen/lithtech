#ifndef MOVEMGR_H
#define MOVEMGR_H

#include "ltbasedefs.h"

class CMoveMgr {
public:
    CMoveMgr();
    virtual ~CMoveMgr();

    virtual uint32 GetControlFlags(); // +0x00
    // ... many accessors ...
    virtual void Init(uint32 hPlayer); // +0x? (found 1001a470)
    virtual void Update(float fDeltaTime); // +0x34 (1001a370)
    
    void UpdateRotation(); // 1001a620
    
protected:
    uint32 m_nType;                // +0x04
    uint32 m_nFlags;               // +0x08
    uint32 m_nState;               // +0x0c
    
    char pad1[0x0c];               // 0x10
    float m_fDeltaTime;            // +0x20
    
    char pad2[0x38];               // 0x24
    void* m_pSomething5C;          // +0x5c (Sub-object?)
    
    char pad3[0x114];              // 0x60 - 0x174
    void* m_pHistoryBuffer;        // +0x17c (Size 0xAA1C)
    void* m_pObject180;            // +0x180
    
    char pad4[0x24];               // 0x184 - 0x1A8
    uint32 m_hClientPlayer;        // +0x150? Wait, 0x150 was in my earlier notes but constructor says 0x150.
                                   // Let's re-verify 0x150.
    
    uint32 m_pClientPlayerObject;  // +0x218
    uint32 m_nMovementState;       // +0x214
};

#endif // MOVEMGR_H
