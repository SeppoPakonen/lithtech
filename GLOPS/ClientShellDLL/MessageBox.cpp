#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class MessageBox {
public:
    void Show(const char* message, uint32 type);
    void Hide();
};

void MessageBox::Show(const char* message, uint32 type) {
}

void MessageBox::Hide() {
}
