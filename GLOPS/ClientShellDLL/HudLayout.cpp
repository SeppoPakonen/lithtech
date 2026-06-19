#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class HudLayout {
public:
    void Read();
    void Write();
};

void HudLayout::Read() {
    // Reads custom HUD widget placement and visibility settings from user configs
}

void HudLayout::Write() {
    // Serializes custom HUD element layouts to config file for persistence
}
