#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class DisplayOptionsScreen {
public:
    void SaveSettings();
};

void DisplayOptionsScreen::SaveSettings() {
    // Writes current resolution, texture depth, and gamma settings back to autoexec.cfg
    // and re-initializes the renderer if necessary.
}
