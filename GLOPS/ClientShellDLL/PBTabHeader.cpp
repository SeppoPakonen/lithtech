#include "TabHeader.h" // Assuming PBTabHeader inherits TabHeader or similar
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class PBTabHeader {
public:
    void AddTab(const char* szName, uint32 tabId); // 0x100729f0
};

// 0x100729f0
void PBTabHeader::AddTab(const char* szName, uint32 tabId) {
    // Adds a visual tab into the internal layout list (e.g. m_apTabs array)
    // Similar to standard TabHeader::AddTab but might include Profile/Badge
    // specific drawing or caching metrics.
    // Assembly limits at typical tab counts (8 max) and invokes UI drawing layers
}
