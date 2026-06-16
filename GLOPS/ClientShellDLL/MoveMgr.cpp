#include "MoveMgr.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// 10019d50
CMoveMgr::CMoveMgr() {
    m_nType = 4;
    m_nFlags = 0;
    m_nState = 8;
    
    m_fDeltaTime = 0.0f;
    
    m_pHistoryBuffer = nullptr;
    m_pObject180 = nullptr;
    
    m_hClientPlayer = 0;
    m_pClientPlayerObject = 0;
    m_nMovementState = 1; // EDI = 1
}

// 1001a470
void CMoveMgr::Init(uint32 hPlayer) {
    m_hClientPlayer = hPlayer;
    
    // Allocate prediction history (Size 0xAA1C)
    // m_pHistoryBuffer = new byte[0xAA1C];
    // constructor at 0x10001330
}

// 1001a370
void CMoveMgr::Update(float fDeltaTime) {
    m_fDeltaTime = fDeltaTime;
    
    // Some internal scaling
    // float fVal = fDeltaTime * some_const;
}

// 1001a620: Reconciliation / Rotation Sync
void CMoveMgr::UpdateRotation() {
    if (!m_pClientPlayerObject) return;
    
    LTRotation rot;
    g_pLTClient->GetObjectRotation(m_pClientPlayerObject, &rot);
    
    // Get client camera rotation and sync?
    // ...
}
