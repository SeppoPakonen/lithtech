#include "BaseOptionsScreen.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

void BaseOptionsScreen::LoadSettings() {
    if ((int)m_nNumControls <= 0) return;
    
    for (uint32 i = 0; i < m_nNumControls; ++i) {
        OptionControl* pControl = m_apControls[i];
        if (!pControl) continue;
        
        switch (pControl->m_nType) {
            case 0:
                // Checkbox toggle control
                break;
            case 1:
                // Slider increment control
                break;
            case 2:
                // Dropdown selector control
                break;
            case 3:
                break;
            case 4:
            case 5:
                // Text-name based item load
                break;
            default:
                g_pLTClient->CPrint("BaseOptionsScreen::LoadSettings: Unhandled item type (%i)", pControl->m_nType);
                break;
        }
    }
}
