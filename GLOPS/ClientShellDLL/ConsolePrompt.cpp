#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class ConsolePrompt {
public:
    void Invoke(); // 0x10075f40
};

// 0x10075f40
void ConsolePrompt::Invoke() {
    // Large loop dispatching console prompt key events,
    // intercepting keystrokes like ~ or Enter to evaluate variables,
    // drawing the prompt UI surface via CWidget/GameClientShell.
}
