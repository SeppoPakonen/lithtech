#ifndef FXMANAGER_H
#define FXMANAGER_H

#include "ILTClient.h"

class FXManager {
public:
    // 0x100275ff
    void CreateSpriteFX();
    
    // 0x10029c00
    void ShatterGlassPane(HLOCALOBJ hPane);
    
    // 0x1002b830
    void BreakGlass(HLOCALOBJ hObj);

    // Internal pool management
    void* GetShardGroup(); // 0x1002cb90
    void* GetModelDecal(); // 0x1002ca10

private:
    // Member offsets discovered:
    // +0xb0: Glass pane list (likely std::list or similar)
    // +0xb4: Active glass panes
    // +0x21d8: Effect array start
    // +0x21dc: Effect array count or pointer
    
    char m_padding[0x3000]; // Placeholder size based on observed offsets
};

extern FXManager* g_pFXManager; // ds:0x1010fed0

#endif // FXMANAGER_H
