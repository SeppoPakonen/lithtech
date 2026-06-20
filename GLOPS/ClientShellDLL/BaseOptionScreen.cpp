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

// 0x100584d0
void BaseOptionsScreen::LoadSettings() {
    if (m_nNumControls <= 0) return;

    for (uint32 i = 0; i < m_nNumControls; i++) {
        OptionControl* pControl = m_apControls[i];
        CUIBase* pCtrl = m_apUIControls[i];

        if (pControl->m_nType > 7) {
            g_pLTClient->CPrint("BaseOptionScreen::LoadSettings: Invalid Option Type %i", pControl->m_nType);
            continue;
        }

        switch (pControl->m_nType) {
            case 0: // Checkbox/Toggle
                ((CToggleCtrl*)pCtrl)->SetOn(pControl->m_nValue != 0);
                break;
            case 1: // Cycle
                ((CCycleCtrl*)pCtrl)->SetSelIndex(pControl->m_nValue);
                break;
            case 2: // Slider 1
                ((CSliderCtrl*)pCtrl)->SetSliderPos(pControl->m_nValue);
                break;
            case 4: // Slider 2
                ((CSliderCtrl2*)pCtrl)->SetSliderPos2(pControl->m_nValue);
                break;
            case 5: // Edit 1
                ((CEditCtrl*)pCtrl)->SetText(pControl->m_szName);
                break;
            case 6: // Edit 2
                ((CEditCtrl2*)pCtrl)->SetText2(pControl->m_szName);
                break;
            case 3:
            case 7:
            default:
                break;
        }
    }
}
