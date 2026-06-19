#ifndef ITEMINFOWINDOW_H
#define ITEMINFOWINDOW_H

#include "ltbasedefs.h"

class ItemInfoWindow {
public:
    ItemInfoWindow();
    virtual ~ItemInfoWindow();

    void* GetIcon(uint32 itemId); // 0x1008c130

protected:
    uint32 m_pad[83];      // 0x00 to 0x14c
    uint32 m_nState;       // 0x14c
    uint32 m_pad2[8];      // 0x150 to 0x170
    uint32 m_nItemId;      // 0x170
    // 0x3f4, 0x454, 0x474, 0x434 (string buffers for damage/accuracy bars)
};

#endif // ITEMINFOWINDOW_H
