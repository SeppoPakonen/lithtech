#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class AboutDialog {
public:
    void LoadLogos(); // 0x1003f030

    // Dummy types
    struct UnknownType {
        void Method_10075640();
        void Method_1003eae0();
    };

    char pad_000[0xf0];
    UnknownType* m_pUnknownF0; // 0xf0
    char pad_0f4[0x8];
    UnknownType* m_pUnknownFC; // 0xfc
    void* m_pLogoSurfaces[3]; // 0x100
};

// 0x1003f030
void AboutDialog::LoadLogos() {
    const char* logoPaths[3];
    logoPaths[0] = "interface/credits/logo_bink.dtx";
    logoPaths[1] = "interface/credits/logo_lithtech.dtx";
    logoPaths[2] = "interface/credits/logo_miles.dtx";

    if (this->m_pUnknownF0) {
        this->m_pUnknownF0->Method_10075640();
    }
    
    if (this->m_pUnknownFC) {
        this->m_pUnknownFC->Method_1003eae0();
    }

    for (int i = 0; i < 3; i++) {
        void* hSurface = g_pInterfaceResMgr->GetSharedSurface(logoPaths[i]);
        
        if (!hSurface) {
            g_pLTClient->DebugOut("C:\\dev\\GLOBALOPS\\source\\clientshell\\gui_aboutdialog.cpp", 570);
            g_pLTClient->CPrint("Darren", "AboutDialog::LoadLogos: Couldn't load texture \"%s\"", logoPaths[i]);
        }
        
        this->m_pLogoSurfaces[i] = hSurface;
    }
}
