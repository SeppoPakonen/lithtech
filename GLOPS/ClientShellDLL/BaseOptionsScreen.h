#ifndef BASEOPTIONSSCREEN_H
#define BASEOPTIONSSCREEN_H

#include "ltbasedefs.h"

struct OptionControl {
    uint32 m_nType;        // offset 0x0
    uint32 m_pad[2];
    uint32 m_nValue;       // offset 0xc (for checkboxes/sliders/etc.)
    char m_szName[32];     // offset 0x10 (for named items)
};

class BaseOptionsScreen {
public:
    BaseOptionsScreen();
    virtual ~BaseOptionsScreen();

    void LoadSettings();   // 0x100584c0

protected:
    uint32 m_pad[113];     // padding up to 0x1c4
    OptionControl* m_apControls[100]; // offset 0x1c4 (assume max 100 controls)
    uint32 m_pad2[91];     // padding from 0x354 to 0x390
    uint32 m_nNumControls; // offset 0x390
};

#endif // BASEOPTIONSSCREEN_H
