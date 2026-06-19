#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class AboutDialog {
public:
    void LoadLogos(); // 0x1003f030
};

// 0x1003f030
void AboutDialog::LoadLogos() {
    // Large method containing static string paths for credits logos:
    // Pushes hardcoded texture paths like "Interface/Credits/Logo_barkingDog.pcx"
    // and registers them using ILTClient surface generation methods.
}
