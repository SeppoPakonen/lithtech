#ifndef MOVEMGR_H
#define BUYMENU_H

#include "ltbasedefs.h"

class CMoveMgr {
public:
    virtual ~CMoveMgr() {}

    virtual void Init() = 0;
    virtual uint32 GetClientPlayer() = 0; // +0x18
    virtual void Update(float fDeltaTime) = 0; // +0x34
    
    // Inferred from vtable calls
    virtual void PreUpdate() = 0; // +0x30?
    virtual void PostUpdate() = 0; // +0x38?
    virtual void OnMessage(uint8 mid, HMESSAGEREAD hMsg) = 0; // +0x24?
    
    // Internal state for prediction
    struct PlayerState {
        LTVector pos;
        LTRotation rot;
        LTVector velocity;
        float timestamp;
    };
    
private:
    PlayerState m_History[64]; // Example history buffer
    uint32 m_nCurrentTick;
};

#endif // MOVEMGR_H
