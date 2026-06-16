#include "GameClientShell.h"
#include <windows.h>

// Global instance of the Client Shell
CGameClientShell* g_pGameClientShell = nullptr;
HINSTANCE g_hInst = nullptr;

// Exported Functions
extern "C" {

__declspec(dllexport) void GetClientShellFunctions(void** pCreateFn, void** pDeleteFn) {
    // 0x1002e8d0 and 0x1002e940 in the original binary
    *pCreateFn = (void*)0x1002e8d0; // Placeholder for actual CreateClientShell
    *pDeleteFn = (void*)0x1002e940; // Placeholder for actual DeleteClientShell
}

__declspec(dllexport) int GetClientShellVersion() {
    return 2;
}

__declspec(dllexport) void SetInstanceHandle(HINSTANCE hInst) {
    g_hInst = hInst;
}

}

// Subsystem Initializers (Internal)
void* CreateClientShell(ILTClient* pLTClient) {
    g_pGameClientShell = new CGameClientShell();
    // g_pGameClientShell->Init(pLTClient);
    return g_pGameClientShell;
}

void DeleteClientShell(void* pShell) {
    if (pShell == g_pGameClientShell) {
        delete g_pGameClientShell;
        g_pGameClientShell = nullptr;
    }
}
