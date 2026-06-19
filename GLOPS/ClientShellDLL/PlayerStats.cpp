#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class PlayerStats {
public:
    void UpdateHealth(float health);
    void UpdateArmor(float armor);
    void Render();
};

void PlayerStats::UpdateHealth(float health) {
    // Updates HUD health meter graphics based on current player HP value
}

void PlayerStats::UpdateArmor(float armor) {
    // Updates HUD armor bar depending on kevlar/helmet values received from server
}

void PlayerStats::Render() {
    // Renders the health/armor and ammo readouts during active gameplay
}
