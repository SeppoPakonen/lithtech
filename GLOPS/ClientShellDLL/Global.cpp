#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// Contains auto-generated string lookup tables, global configuration, 
// and monolithic jump tables generated during initial decompilation
// that were too large to be cleanly segmented into logical modules.

// Abstracted globals:
uint32 g_nClientFlags = 0;
float g_fClientTime = 0.0f;
void* g_pStringTable = nullptr;

void InitGlobals() {
    // Called early in engine init (e.g. from IClientShell::OnEngineInitialized)
    // to setup the monolithic global data structures
}

void ShutdownGlobals() {
    // Cleanup routines for dynamically allocated global data
}
