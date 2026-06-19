#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class LTGUIWindow {
public:
    void Init();
    void Render();
    void Update();
};

void LTGUIWindow::Init() {
    // Sets up window dimensions, background surfaces, and widget containers
}

void LTGUIWindow::Render() {
    // Draws window frames, backgrounds, and iterates through child widgets to draw them
}

void LTGUIWindow::Update() {
    // Processes generic window states, fade-ins/outs, and positional interpolation
}
