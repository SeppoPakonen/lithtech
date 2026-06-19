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

    void Dequeue(int unknown1, LTRect* pRect); // 0x1005b2f0

protected:
    uint32 m_pad[12];      // offsets 0x04 to 0x34
    uint8 m_bDrawBG;       // offset 0x34
    uint8 m_pad_active[3]; // offset 0x35
    uint8 m_bActive;       // offset 0x38
    uint8 m_pad_active2[3]; // offset 0x39
    DeathQueueItem m_aItems[6]; // offset 0x3c to 0xfc (6 * 32 = 192 bytes)
    uint32 m_pad2[15];     // pad from 0xfc to 0x138
    uint32 m_nHead;        // offset 0x138
    uint32 m_nTail;        // offset 0x13c
    uint32 m_nColor;       // offset 0x140
    uint32 m_nNumItems;    // offset 0x144
    uint32 m_nMaxItems;    // offset 0x148
};

#endif // HUDDEATHQUEUE_H
