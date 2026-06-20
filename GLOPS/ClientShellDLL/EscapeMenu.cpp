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
    if (g_pLTClient->IsConnected()) {
        ((void (*)())0x10050f10)();
    } else {
        ((void (*)())0x10050ec0)();
    }
}

// 0x1004ce40 (Resume)
static void Callback_Resume() {
    ((void (*)())0x10050ec0)();
}

// 0x1004ce60 (Disconnect)
static void Callback_Disconnect() {
    ((void (*)())0x10050ec0)();
    if (g_pLTClient->IsConnected()) {
        // vtable offset 0x30 is Disconnect
        ((void (__thiscall*)(void*))(*(void***)g_pLTClient)[12])(g_pLTClient);
    }
}

// 0x1004ce50 (Exit)
static void Callback_Exit() {
    extern class CGameClientShell* g_pGameClientShell; // 0x1011a134
    if (g_pGameClientShell) {
        *(uint32*)((char*)g_pGameClientShell + 0x18528) = 2;
    }
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
    // 0x1004c63d originally prints debug/font strings and adds the options inline
    Init();
}

int EscapeMenu::HitTest(int x, int y) {
    int diffY = y - m_y;
    int spacing = m_itemPadding + m_itemSize;
    if (diffY < 0) return -1;
    
    int index = diffY / spacing;
    if (index >= (int)m_nNumOptions) return -1;
    
    if (diffY % spacing >= m_itemSize) return -1;
    if (m_anOptionIds[index] == 0) return -1;
    
    return index;
}

// 0x1004c9d0
void EscapeMenu::OnMouseMove(int x, int y) {
    int index = HitTest(x, y);
    m_nSelectedOption = index;
    
    // PlaySound(4, 0)
    ((void (__thiscall*)(void*, int, int))0x1006e780)(this, 4, 0);
}

// 0x1004ca30
void EscapeMenu::OnLButtonUp(int x, int y) {
    int index = HitTest(x, y);
    m_nSelectedOption = index;
    
    // PlaySound(4, 0)
    ((void (__thiscall*)(void*, int, int))0x1006e780)(this, 4, 0);
    
    if (m_nSelectedOption != 0xFFFFFFFF && m_nSelectedOption < m_nNumOptions) {
        if (m_aOptionCallbacks[m_nSelectedOption]) {
            // Hide/Close menu
            ((void (__thiscall*)(void*, int))0x100737a0)(this, 0);
            m_aOptionCallbacks[m_nSelectedOption]();
        }
    }
}

// 0x1004cac0
void EscapeMenu::OnKeyDown(uint32 key) {
    if (key >= '1' && key <= '4') {
        int index = key - '1';
        if (index < (int)m_nNumOptions && m_aOptionCallbacks[index]) {
            // Hide/Close menu
            ((void (__thiscall*)(void*, int))0x100737a0)(this, 0);
            m_aOptionCallbacks[index]();
        }
    }
    
    // Call base class OnKeyDown
    ((void (__thiscall*)(void*, uint32, uint32))0x10073a00)(this, key, 0);
}

// 0x1004cb70
void EscapeMenu::UpdateLayout(int screenWidth, int screenHeight) {
    // Base class UpdateLayout
    ((void (__thiscall*)(void*, int))0x10073820)(this, screenWidth);
    
    int unk;
    ((void (__thiscall*)(void*, int*, int))0x100736f0)(this, &unk, screenWidth);
    
    void* pFont = *(void**)0x100db6f0;
    int fontHeight = ((int (__thiscall*)(void*))0x1004d270)(pFont);
    m_itemSize = fontHeight + 2;
    
    m_itemPadding = 10;
    
    int maxWidth = ((int (__thiscall*)(void*))0x1004d220)(pFont);
    m_pad2[0] = maxWidth; // 0x128
    
    int maxTextWidth = 0;
    for (uint32 i = 0; i < m_nNumOptions; i++) {
        char* text = (char*)m_anOptionIds[i]; 
        if (text) {
            int width = ((int (__thiscall*)(void*, char*))0x1004d220)(pFont, text);
            if (width > maxTextWidth) maxTextWidth = width;
        }
    }
    m_pad2[3] = maxTextWidth; // 0x134
    
    int totalHeight = m_nNumOptions * (m_itemPadding + m_itemSize) - m_itemPadding;
    
    m_x = (screenWidth - maxTextWidth) / 2 + unk;
    m_y = (screenHeight - totalHeight) / 2 + m_pad2[1]; // 0x12c
}

// 0x1004ccb0
void EscapeMenu::Render() {
    // Render base
    ((void (__thiscall*)(void*))0x100738c0)(this);
    
    if (m_nNumOptions == 0) return;
    
    void* pFont = *(void**)0x100db6f0;
    void* pSurface = *(void**)0x1011be5c;
    
    for (uint32 i = 0; i < m_nNumOptions; i++) {
        if (m_anOptionIds[i]) {
            int yPos = m_y + i * (m_itemSize + m_itemPadding);
            int color = (i == m_nSelectedOption) ? 0xFFFFFF : 0x808080;
            
            ((void (__cdecl*)(void*, void*, const char*, int, int, int))0x1004a100)(
                pSurface, pFont, (const char*)m_anOptionIds[i], m_x, yPos, color);
        }
    }
}
