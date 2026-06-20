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
}

void PlayerStats::UpdateArmor(float armor) {
}

void PlayerStats::Render() {
}
