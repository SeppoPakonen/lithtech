#include "GunClient.h"
#include "Protocol.h"
#include "WeaponAttributes.h"
#include "ILTClient.h"

// Globals
extern ILTClient* g_pLTClient; // ds:0x1010cfc8
extern WeaponAttributes* g_pWeaponAttributes; // ds:0x1010cf6c

// 0x1007b8c0
void GunClient::Init() {
    if (m_nWeaponId == 255) return;
    
    uint32 index = m_nWeaponId;
    if (m_nAmmoType == 1) {
        index = m_nWeaponId + 64;
    }
    
    if (index == 255) return;
    if (m_pViewObject == 0) return;
    if (m_nStateFlags & 0x80) return;
    
    m_bState194 = false;
    m_bState198 = false;
    
    WeaponAttributes* pData = &g_pWeaponAttributes[index];
    
    // Setup animations, sockets, and hand textures
    // Passing pointers to weapon object, data, etc. (0x1009c860)
    // SetupWeaponAnimations(m_pViewObject, ...);
    
    if (pData->flags & 0x10000) {
        // Setup hand skins/textures (0x1009d6e0)
        // SetupHandTextures(m_pViewObject);
    }
    
    float fScale = 1.0f;
    if (!(pData->flags & 0x1000000) || pData->type == 6) {
        fScale = 1000.0f; // 0x447a0000
    } else {
        fScale = 1350.0f; // 0x44a8c000
    }
    
    // ... further scaling and sound initialization ...
}

// 0x1007c760
void GunClient::PullTrigger() {
    m_bState130 = false; 
    
    // Call virtual Fire() via vtable offset 0x6c
    // In GunClient, this resolves to 0x1007c770
    this->Fire();
}

// 0x1007c770
void GunClient::Fire() {
    // 1007c77f: call 0x10009970 (GetTime or similar)
    // ...
    
    // Check firing mode (0=Single, 1=FullAuto) at +0x48
    if (m_nFiringMode == 1) { // Full Auto
        if (m_bCanFire) {
            // Get model rotation and position via vtable calls on m_pWeaponModel
            // 1007c939: call [edx+0x50] (GetRotation)
            // 1007c945: call [edx+0x4c] (GetPosition)
            
            // Create and write message
            // ILTMessage_Write* pMsg = g_pLTClient->CreateMessage();
            // pMsg->WriteVector(vPos);
            // pMsg->WriteRotation(rRot);
            
            // SendToServer (0x19c)
            // g_pLTClient->SendToServer(pMsg, MESSAGE_GUARANTEED, 1);
        }
    } else if (m_nFiringMode == 0) { // Single Shot
        // Similar to Full Auto but sets state flags
        m_bState132 = true;
    }
    
    // Update visible ammo (bullets in mag)
    UpdateVisibleAmmo();
}

// 0x1007e130
void GunClient::UpdateVisibleAmmo() {
    // Logic to show/hide "topbullet" socket on weapon model
    // ...
}
