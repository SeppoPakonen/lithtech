#include "EscapeMenu.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// Externs for systems (using generic void* or known types if available)
class CClientButeMgr {
public:
    uint32 GetString(uint32 id);
};
extern CClientButeMgr* g_pClientButeMgr; // 0x1011a14c

// 0x1004ceb0
void EscapeMenu::AddOption(uint32 optionId, void (*callback)()) {
    if (m_nNumOptions < 4) {
        m_anOptionIds[m_nNumOptions] = optionId;
        m_aOptionCallbacks[m_nNumOptions] = callback;
        m_nNumOptions++;
    } else {
        g_pLTClient->CPrint("EscapeMenu::AddOption: MAX_OPTIONS exceeded (%i)", 4);
    }
}

// 0x1004ce20 (Options)
static void Callback_Options() {
    // 0x1004ce20
    // g_pGameClientShell->SetGameState(GS_OPTIONS)
}

// 0x1004ce40 (Resume)
static void Callback_Resume() {
    // 0x1004ce40
}

// 0x1004ce60 (Disconnect)
static void Callback_Disconnect() {
    // 0x1004ce60
}

// 0x1004ce50 (Exit)
static void Callback_Exit() {
    // 0x1004ce50
}

// 0x1004c551
void EscapeMenu::Init() {
    m_nNumOptions = 0;
    AddOption(g_pClientButeMgr->GetString(m_aOptionStringIds[1]), Callback_Resume);
    AddOption(g_pClientButeMgr->GetString(m_aOptionStringIds[0]), Callback_Options);
    AddOption(g_pClientButeMgr->GetString(m_aOptionStringIds[2]), Callback_Disconnect);
    AddOption(g_pClientButeMgr->GetString(m_aOptionStringIds[3]), Callback_Exit);
}

// 0x1004c63d
void EscapeMenu::OnLoadData() {
    // Placeholder for OnLoadData
}

int EscapeMenu::HitTest(int x, int y) {
    int diffY = y - m_y;
    int spacing = m_itemPadding + m_itemSize;
    if (diffY < 0) return -1;
    
    int index = diffY / spacing;
    if (index >= m_nNumOptions) return -1;
    
    if (diffY % spacing >= m_itemSize) return -1;
    if (m_anOptionIds[index] == 0) return -1;
    
    return index;
}

// 0x1004c9d0
void EscapeMenu::OnMouseMove(int x, int y) {
    int index = HitTest(x, y);
    m_nSelectedOption = index;
    // PlaySound(0, 4) equivalent
}

// 0x1004ca30
void EscapeMenu::OnLButtonUp(int x, int y) {
    int index = HitTest(x, y);
    m_nSelectedOption = index;
    
    if (m_nSelectedOption != -1 && m_nSelectedOption < m_nNumOptions) {
        if (m_aOptionCallbacks[m_nSelectedOption]) {
            m_aOptionCallbacks[m_nSelectedOption]();
        }
    }
}

// 0x1004cac0
void EscapeMenu::OnKeyDown(uint32 key) {
    if (key >= '1' && key <= '4') {
        int index = key - '1';
        if (index < m_nNumOptions && m_aOptionCallbacks[index]) {
            m_aOptionCallbacks[index]();
        }
    }
}

// 0x1004cb70
void EscapeMenu::UpdateLayout(int screenWidth, int screenHeight) {
    // Computes layout based on font size and string width
    // m_itemSize = g_pFontManager->GetFontHeight() + 2;
    // ...
}

// 0x1004ccb0
void EscapeMenu::Render() {
    // Renders the background and iterates over m_anOptionIds to render text
    // if (m_nNumOptions > 0) { ... DrawString ... }
}
