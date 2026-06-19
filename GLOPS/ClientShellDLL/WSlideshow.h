#ifndef WSLIDESHOW_H
#define WSLIDESHOW_H

#include "ltbasedefs.h"

class WSlideshow {
public:
    WSlideshow();
    virtual ~WSlideshow();

    void LoadSlides(); // 0x1003eae0
    void Render(void* pRect); // 0x1003ec60

protected:
    uint32 m_pad[10];                  // offsets 0x04 to 0x2c
    float m_fNextSlideTime;            // offset 0x2c
    uint32 m_nCurrentSlide;            // offset 0x30
    uint32 m_nNumSlides;               // offset 0x34
    void** m_apSlideTextures;          // offset 0x38
};

#endif // WSLIDESHOW_H
