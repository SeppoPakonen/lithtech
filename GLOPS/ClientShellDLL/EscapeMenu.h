#ifndef ESCAPEMENU_H
#define ESCAPEMENU_H

#include "ltbasedefs.h"

class EscapeMenu {
public:
    EscapeMenu();
    virtual ~EscapeMenu();

    void Init();                                     // 0x1004c551 (mapped as first AddOption)
    void OnLoadData();                               // 0x1004c63d
    void AddOption(uint32 optionId, uint32 nameId);  // 0x1004ceb0

protected:
    uint32 m_pad[60];                                // offsets 0x04 to 0xf0
    uint32 m_anOptionIds[4];                         // offset 0xf0
    uint32 m_anOptionNames[4];                       // offset 0x100
    uint32 m_nNumOptions;                            // offset 0x110
    char m_szName[32];                               // offset 0x13c
};

#endif // ESCAPEMENU_H
