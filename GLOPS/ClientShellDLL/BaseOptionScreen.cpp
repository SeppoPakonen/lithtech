#include "BaseOptionsScreen.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// 0x10057740
void BaseOptionsScreen::AddOption(OptionControl* pControl) {
    if (m_nNumControls >= 100) {
        g_pLTClient->CPrint("BaseOptionScreen::AddOption: MAX_OPTION_ITEMS exceeded (%i)", m_nNumControls);
        return;
    }
    
    m_apControls[m_nNumControls] = pControl;
    m_nNumControls++;
}
