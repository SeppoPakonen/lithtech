#ifndef GUIMANAGER_H
#define GUIMANAGER_H

#include "ltbasedefs.h"

// HUD Widget Layout IDs
enum HUDWidgetID {
    WIDGET_HEALTH      = 1,
    WIDGET_WALLET      = 2,
    WIDGET_AMMO        = 3,
    WIDGET_FIRESELECT  = 5,
    WIDGET_TTDTIMER    = 6,
    WIDGET_ROUNDTIMER  = 7,
    WIDGET_COMPASS     = 8
};

// GUI Screen States
enum GUIState {
    GUI_INGAME         = 2,
    GUI_ENDROUND       = 6
};

class CGuiManager {
public:
    CGuiManager();
    ~CGuiManager();

    // Changes the current active screen/HUD mode
    void ChangeState(uint32 newState);

    // Transitions and updates flags
    void TransitionState();

    // Message handler for match state updates (MID_GAME_STATUS)
    void OnMessageGameStatus(void* hMessage);

public:
    void* m_pWidgetArray[32]; // 0x4C (Array of state/widget descriptors)
    uint32 m_nTargetState;    // 0x80
    uint32 m_nCurrentState;   // 0x84
    uint32 m_nFlags;          // 0x8C
};

extern CGuiManager* g_pGuiMgr; // Located at ds:0x101240d8

#endif // GUIMANAGER_H
