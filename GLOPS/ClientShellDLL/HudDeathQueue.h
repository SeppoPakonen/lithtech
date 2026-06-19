#ifndef HUDDEATHQUEUE_H
#define HUDDEATHQUEUE_H

#include "ltbasedefs.h"

struct DeathQueueItem {
    char szMessage[28];
    float fTimeRemaining;
};

class HudDeathQueue {
public:
    HudDeathQueue();
    virtual ~HudDeathQueue();

    void Render(void* pRect);        // 0x1005b2f0
    void UpdateLayout();             // 0x1005b4c0

protected:
    uint32 m_pad[12];      // offsets 0x04 to 0x34
    uint8 m_bDrawBG;       // offset 0x34
    uint8 m_pad_active[3]; // offset 0x35
    DeathQueueItem m_aItems[6]; // offset 0x38 to 0xf8
    uint32 m_nHead;        // offset 0xf8
    uint32 m_nTail;        // offset 0xfc
    uint32 m_nNumItems;    // offset 0x100
    uint32 m_nItemHeight;  // offset 0x104
    uint32 m_pad2[14];     // offset 0x108 to 0x140
    uint32 m_nColor;       // offset 0x140
    uint32 m_pad3;         // offset 0x144
    uint32 m_nMaxItems;    // offset 0x148
    uint8 m_bActive;       // offset 0x14c
};

#endif // HUDDEATHQUEUE_H
