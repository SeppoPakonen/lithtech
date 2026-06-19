#include "HudDeathQueue.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

struct LTRect {
    int x, y, width, height; // assumption based on usage
};

extern void DrawRect(LTRect* pRect, uint32 color);
extern void DrawString(void* font, const char* str, int x, int y, uint32 color);

HudDeathQueue::HudDeathQueue() {
    m_bDrawBG = false;
    m_bActive = false;
    m_nHead = 0;
    m_nTail = 0;
    m_nNumItems = 0;
    m_nMaxItems = 6;
    m_nItemHeight = 0;
}

HudDeathQueue::~HudDeathQueue() {
}

// 0x1005b2f0
void HudDeathQueue::Render(void* pRectPtr) {
    LTRect* pRect = (LTRect*)pRectPtr;
    
    if (m_bDrawBG) {
        DrawRect(pRect, 0xA0000000);
    }
    
    if (m_nNumItems == 0) {
        return;
    }
    
    float fTime = g_pLTClient->GetTime();
    
    // Process expiring items
    while (m_nNumItems > 0) {
        if (m_aItems[m_nHead].fTimeRemaining > fTime) {
            break;
        }
        m_nHead = (m_nHead + 1) % m_nMaxItems;
        m_nNumItems--;
    }
    
    if (m_nNumItems == 0) {
        return;
    }
    
    // Calculate layout Y start
    int itemHeight = m_nItemHeight;
    int itemsToDraw = m_nNumItems;
    int maxHeight = pRect->height;
    int maxDisplayable = maxHeight / itemHeight;
    
    if (itemsToDraw > maxDisplayable) {
        itemsToDraw = maxDisplayable;
    }
    
    if (itemsToDraw == 0) return;
    
    int drawY = pRect->y + pRect->height - (itemsToDraw * itemHeight);
    int drawX = pRect->x + 2; // Assuming some padding
    
    // In actual assembly it computes alpha fade for the oldest item if it's about to expire
    // 1005b426: fsub 100ba428 etc.
    
    int currentIdx = m_nHead;
    for (int i = 0; i < itemsToDraw; ++i) {
        float fRemaining = m_aItems[currentIdx].fTimeRemaining - fTime;
        int alpha = 255;
        
        // If remaining time is less than 1.0s, fade out
        if (fRemaining < 1.0f) {
            alpha = (int)(fRemaining * 255.0f);
        }
        
        if (alpha > 0) {
            uint32 color = (alpha << 24) | (m_nColor & 0xFFFFFF);
            DrawString(nullptr, m_aItems[currentIdx].szMessage, drawX, drawY, color);
        }
        
        drawY += itemHeight;
        currentIdx = (currentIdx + 1) % m_nMaxItems;
    }
}

// 0x1005b4c0
void HudDeathQueue::UpdateLayout() {
    // Simulated Font Manager GetFontHeight
    // m_nItemHeight = g_pFontManager->GetFontHeight() * 4;
    m_nItemHeight = 16 * 4; 
}
