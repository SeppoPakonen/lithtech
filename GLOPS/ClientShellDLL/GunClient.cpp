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
    
    // Setup animations, sockets, and hand textures (logic at 0x1009c860, 0x1009d6e0)
    // ...
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
    if (m_nFiringMode == 1) {
        if (m_bCanFire) {
            ILTMessage_Write* pMsg = g_pLTClient->CreateMessage();
            if (pMsg) {
                // Get model rotation and position (0x50, 0x4c on +0x14)
                // pMsg->WriteVector(m_vPos);
                // pMsg->WriteRotation(m_rRot);
                
                // 1007c99c: ILTClient::SendToServer(pMsg, MESSAGE_GUARANTEED, 1)
                g_pLTClient->SendToServer(pMsg, 0x1); 
            } else {
                g_pLTClient->CPrint("ERROR!!: CreateMessage Failed! In GunClient::PullTrigger. FullAuto");
            }
        }
    } else if (m_nFiringMode == 0) {
        // Single shot logic
        // ... similar to FullAuto but maybe sets a 'has fired' flag
    }
    
    // Handle visible ammo (bullets in mag) at 0x1007e130
    UpdateVisibleAmmo();
}

// 0x1007e130
void GunClient::UpdateVisibleAmmo() {
    // Logic to show/hide "topbullet" socket on weapon model
    // ...
}
