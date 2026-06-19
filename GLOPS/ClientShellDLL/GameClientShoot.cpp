#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class GameClientShoot {
public:
    void OnMessage();
};

void GameClientShoot::OnMessage() {
    // Handles specific network messages related to weapon firing events, 
    // updating local hit registration or spawning tracer FX
}
