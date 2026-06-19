#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class InGameMenu {
public:
    void Navigate(); // 0x10082fed
};

// 0x10082fed
void InGameMenu::Navigate() {
    // Navigates the in-game Escape menu options (Resume, Disconnect, Options, Quit)
    // Plays sound effects and highlights buttons based on keyboard/mouse input
}
