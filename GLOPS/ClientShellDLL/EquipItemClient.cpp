#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class EquipItemClient {
public:
    void Update();
};

void EquipItemClient::Update() {
    // Manages the animation states and client-side logic for equipped items
    // (e.g. idle sway, weapon bob, drawing/holstering interpolations)
}
