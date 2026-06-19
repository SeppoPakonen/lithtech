#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class Layout {
public:
    void ParseConfig();
};

void Layout::ParseConfig() {
    // Reads screen coordinates, widget sizes, and dynamic layout anchors from bute files
    // allowing the UI to scale somewhat flexibly across resolutions.
}
