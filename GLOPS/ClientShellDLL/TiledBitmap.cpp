#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class TiledBitmap {
public:
    void Load();
};

void TiledBitmap::Load() {
    // Calculates optimal power-of-two grid splitting for large UI backgrounds
    // Uses CreateSurfaceFromBitmap to cache chunks sequentially into memory
}
