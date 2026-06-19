#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class WidgetManager {
public:
    WidgetManager();
};

WidgetManager::WidgetManager() {
    // Initializes the global GUI widget tracking tree/linked list
    // Pre-allocates core fonts and cursors via ILTClient
}
