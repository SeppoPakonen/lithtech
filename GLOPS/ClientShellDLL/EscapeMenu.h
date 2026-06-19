#ifndef ESCAPEMENU_H
#define ESCAPEMENU_H

#include "ltbasedefs.h"

class EscapeMenu {
public:
    EscapeMenu();
    virtual ~EscapeMenu();

    void Init();                                     // 0x1004c551 (mapped as first AddOption)
    void OnLoadData();                               // 0x1004c63d
    void AddOption(uint32 optionId, void (*callback)());  // 0x1004ceb0

protected:
    uint32 m_pad[60];                                // offsets 0x04 to 0xf0
    uint32 m_anOptionIds[4];                         // offset 0xf0
    void (*m_aOptionCallbacks[4])();                 // offset 0x100
    uint32 m_nNumOptions;                            // offset 0x110
    uint32 m_nSelectedOption;                        // offset 0x114
    int m_y;                                         // offset 0x118
    int m_itemSize;                                  // offset 0x11c
    int m_itemPadding;                               // offset 0x120
    int m_x;                                         // offset 0x124
    uint32 m_pad2[5];                                // offset 0x128 to 0x138
    uint32 m_aOptionStringIds[4];                    // offset 0x13c

};

#endif // ESCAPEMENU_H
