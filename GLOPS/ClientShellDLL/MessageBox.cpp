#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class MessageBox {
public:
    void Show(const char* message, uint32 type);
    void Hide();
};

void MessageBox::Show(const char* message, uint32 type) {
    // Overlays a modal dialog with Yes/No/Ok buttons, capturing input focus
    // and rendering the provided message string centered.
}

void MessageBox::Hide() {
    // Dismisses the modal and restores input routing to the previous UI screen
}
