#include "WSlideshow.h"
#include "ILTClient.h"

// Assuming g_pLTClient is an ILTClient* and ITexInterface is used for textures
extern ILTClient* g_pLTClient;

struct LTRect {
    int x;
    int y;
    int right;
    int bottom;
};

// 0x1004a690 - External texture drawing function (possibly DrawPrim)
// The assembly pushes color, 0, bottom, right, y, x, hTex, and calls a member function on 0x1011be5c
extern void DrawTexture(void* hTex, int x, int y, int right, int bottom, int unknown, uint32 color);

// 0x100a50dc - Random function, returns an integer
extern int GetRandomSlideIndex();

// 0x1003eae0
void WSlideshow::LoadSlides() {
    if (m_apSlideTextures != nullptr) {
        delete[] m_apSlideTextures;
    }

    m_nNumSlides = 19; // 0x13
    m_apSlideTextures = nullptr;
    m_nCurrentSlide = 0xFFFFFFFF; // -1
    m_fNextSlideTime = 0.0f;

    m_apSlideTextures = new void*[m_nNumSlides];
    
    // Original code placed 19 string pointers on the stack
    const char* szSlides[19] = {
        (const char*)0x100d9dec, (const char*)0x100d9dd0, (const char*)0x100d9db4,
        (const char*)0x100d9d98, (const char*)0x100d9d7c, (const char*)0x100d9d60,
        (const char*)0x100d9d44, (const char*)0x100d9d28, (const char*)0x100d9d0c,
        (const char*)0x100d9cf0, (const char*)0x100d9cd4, (const char*)0x100d9cb8,
        (const char*)0x100d9c9c, (const char*)0x100d9c80, (const char*)0x100d9c64,
        (const char*)0x100d9c48, (const char*)0x100d9c2c, (const char*)0x100d9c10,
        (const char*)0x100d9bf4
    };
    
    for (uint32 i = 0; i < m_nNumSlides; ++i) {
        m_apSlideTextures[i] = nullptr;
    }

    for (uint32 i = 0; i < m_nNumSlides; ++i) {
        // g_pLTClient->GetTexInterface()->CreateTextureFromName(szSlides[i]);
        // The assembly calls ds:0x1010cff0 (TexInterface) and virtual function offset 0x8
        // m_apSlideTextures[i] = ...
    }

    // Call random function and modulo by m_nNumSlides
    m_nCurrentSlide = GetRandomSlideIndex() % m_nNumSlides;

    // Set initial next slide time: fTime + 1.0f + 4.0f
    float fTime = g_pLTClient->GetTime();
    m_fNextSlideTime = fTime + 1.0f + 4.0f; // 0x100d8c74 and 0x100d8c70
}

// 0x1003ec60
void WSlideshow::Render(void* pRectPtr) {
    if (m_nCurrentSlide == 0xFFFFFFFF) {
        return;
    }

    LTRect* pRect = (LTRect*)pRectPtr;
    
    float fTime = g_pLTClient->GetTime(); // ds:0x1011a14c -> +0xd8

    if (fTime >= m_fNextSlideTime) {
        m_nCurrentSlide = (m_nCurrentSlide + 1) % m_nNumSlides;
        // m_fNextSlideTime += 1.0f + 4.0f;
        m_fNextSlideTime = fTime + 1.0f + 4.0f;
    }

    int alpha = 255;
    
    // 1003ec8d: fcomp DWORD PTR ds:0x100ab188 (m_fNextSlideTime - 1.0f)
    if (fTime >= (m_fNextSlideTime - 1.0f)) {
        float fFadeTime = m_fNextSlideTime - fTime;
        alpha = (int)((fFadeTime / 1.0f) * 255.0f);
    }
    
    int nextAlpha = 255 - alpha;

    if (alpha != 0) {
        uint32 color = ((alpha & 0xFF) << 24) | 0xFFFFFF;
        DrawTexture(m_apSlideTextures[m_nCurrentSlide], pRect->x, pRect->y, pRect->right, pRect->bottom, 0, color);
    }

    if (nextAlpha != 0) {
        uint32 color = ((nextAlpha & 0xFF) << 24) | 0xFFFFFF;
        uint32 nextSlide = (m_nCurrentSlide + 1) % m_nNumSlides;
        DrawTexture(m_apSlideTextures[nextSlide], pRect->x, pRect->y, pRect->right, pRect->bottom, 0, color);
    }
}
