#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class HUDMgr {
public:
    void Init();
    void Render();
    void Update();
};

void HUDMgr::Init() {
    // Sets up all HUD sub-components (crosshair, radar, chat, kill ticker)
}

void HUDMgr::Render() {
    // Top-level render loop for all in-game 2D overlays
}

void HUDMgr::Update() {
    // Animates HUD elements and processes fade timers
}
