#include "WSlideshow.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

struct LTRect {
    int x;
    int y;
    int right;
    int bottom;
};

// Assuming an external texture drawing function
extern void DrawTexture(void* hTex, int x, int y, int w, int h, int unknown, uint32 color);

// 0x1003eae0
void WSlideshow::LoadSlides() {
    // Original code loads 19 textures from specific string pointers
    m_nNumSlides = 19; // 0x13
    m_apSlideTextures = new void*[m_nNumSlides];
    
    // The original code passed hardcoded string pointers (e.g. 0x100d9dec to 0x100d9bf4) 
    // to a texture creation function (0x100a50dc or similar).
    for (uint32 i = 0; i < m_nNumSlides; ++i) {
        // m_apSlideTextures[i] = CreateTextureFromName(szSlides[i]);
        m_apSlideTextures[i] = nullptr; 
    }
    
    m_nCurrentSlide = 0xFFFFFFFF; // -1
    m_fNextSlideTime = 0.0f;
}

// 0x1003ec60
void WSlideshow::Render(void* pRectPtr) {
    if (m_nCurrentSlide == 0xFFFFFFFF) {
        return;
    }

    LTRect* pRect = (LTRect*)pRectPtr;
    
    float fTime = g_pLTClient->GetTime(); // 0xd8

    if (fTime >= m_fNextSlideTime) {
        m_nCurrentSlide = (m_nCurrentSlide + 1) % m_nNumSlides;
        
        // Time constants from memory (0x100d8c74 and 0x100d8c70)
        // Assume 4.0s display time, 1.0s fade time
        m_fNextSlideTime = fTime + 4.0f + 1.0f; 
    }

    float fFadeTime = m_fNextSlideTime - fTime;
    int alpha = 255;
    
    // Crossfade logic: if less than 1.0s remaining, start fading
    if (fFadeTime < 1.0f) {
        alpha = (int)(fFadeTime * 255.0f);
    }
    
    int nextAlpha = 255 - alpha;

    int x = pRect->x;
    int y = pRect->y;
    int w = pRect->right;  // assuming right/bottom or width/height
    int h = pRect->bottom;

    if (alpha > 0) {
        uint32 color = ((alpha & 0xFF) << 24) | 0xFFFFFF;
        DrawTexture(m_apSlideTextures[m_nCurrentSlide], x, y, w, h, 0, color);
    }

    if (nextAlpha > 0) {
        uint32 color = ((nextAlpha & 0xFF) << 24) | 0xFFFFFF;
        uint32 nextSlide = (m_nCurrentSlide + 1) % m_nNumSlides;
        DrawTexture(m_apSlideTextures[nextSlide], x, y, w, h, 0, color);
    }
}
