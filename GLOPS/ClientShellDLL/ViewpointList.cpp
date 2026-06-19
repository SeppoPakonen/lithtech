#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class ViewpointList {
public:
    void AllocItem();
};

void ViewpointList::AllocItem() {
    // Dynamically allocates viewpoint/camera tracking entities for UI rendering
}
