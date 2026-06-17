#include "HudAmmo.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// 0x10059950: HudAmmo::Render
void HudAmmo::Render() {
    // Logic extracted from 0x10059950 assembly
    // Setup drawing for ammo icons
    // ILTDrawPrim* pDrawPrim = g_pLTClient->GetDrawPrim();
    
    // Iterates through current ammo and renders icons
    // ...
}

// 0x100598d0: HudAmmo::SyncBulletTextures
void HudAmmo::SyncBulletTextures() {
    // Loads bullet textures based on weapon attributes
}
