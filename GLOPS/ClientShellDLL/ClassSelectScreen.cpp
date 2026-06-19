#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class ClassSelectScreen {
public:
    void Init();
    void SelectClass(uint32 classId);
};

void ClassSelectScreen::Init() {
    // Abstracted: UI setup for class selection (Sniper, Medic, Assault, etc.)
}

void ClassSelectScreen::SelectClass(uint32 classId) {
    // Abstracted: Submits selected class ID to GameClientShell and server
}
