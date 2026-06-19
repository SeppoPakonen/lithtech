#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class TabFolder {
public:
    void AddPage();
    void AddTab();
};

void TabFolder::AddPage() {
    // Links a CWidget control to a specific tab index
}

void TabFolder::AddTab() {
    // Passes tab creation commands down to the embedded TabHeader instance
}
