#ifndef WSLIDESHOW_H
#define WSLIDESHOW_H

#include "ltbasedefs.h"

class WSlideshow {
public:
    WSlideshow();
    virtual ~WSlideshow();

    void LoadSlides(); // 0x1003eae0

protected:
    uint32 m_pad[12];                  // offsets 0x04 to 0x30
    uint32 m_nCurrentSlide;            // offset 0x30
    uint32 m_nNumSlides;               // offset 0x34
    void** m_apSlideTextures;          // offset 0x38 (array of texture handles)
};

#endif // WSLIDESHOW_H
