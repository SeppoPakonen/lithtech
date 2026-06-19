#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class PreCacheMgr {
public:
    void PreCacheSpriteFX(); // 0x10096880
};

// 0x10096880
void PreCacheMgr::PreCacheSpriteFX() {
    // Queries the CButeMgr (e.g. at ds:0x10111100 or ds:0x1010cfc8)
    // for SpriteFX or visual FX definitions and calls
    // ILTClient::CacheFile or similar methods to preload textures and sprite assets
    // into memory for fast rendering during gameplay.
    // Assembly pushes numerous Bute keys to load "Sprites/...", "Tex/..."
}
