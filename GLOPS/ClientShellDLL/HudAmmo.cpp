#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class HudAmmo {
public:
    void SyncBulletTextures(); // 0x100598d0
};

// 0x100598d0
void HudAmmo::SyncBulletTextures() {
    // Synchronizes the visual bullet/magazine icons on the HUD
    // Retrieves ammo counts from the active weapon
    // Dynamically toggles alpha/visibility of bullet texture nodes
}
