#include "TabHeader.h"
#include "ILTClient.h"
#include <string.h>

extern ILTClient* g_pLTClient;

TabHeader::TabHeader() {
    m_nNumTabs = 0;
    m_pActiveTab = nullptr;
    memset(m_apTabs, 0, sizeof(m_apTabs));
}

TabHeader::~TabHeader() {
    for (uint32 i = 0; i < m_nNumTabs; ++i) {
        if (m_apTabs[i]) {
            delete m_apTabs[i];
            m_apTabs[i] = nullptr;
        }
    }
}

// 0x10072670
bool TabHeader::AddTab(const char* szName, uint32 tabId) {
    if (m_nNumTabs >= 8) return false;

    Tab* pTab = new Tab();
    if (!pTab) return false;

    // Simulate 0x1006e380 constructor and initializations
    *(uint32*)pTab = 0x100bbec0; // vtable
    pTab->m_dwStatus = 0;
    pTab->m_nTabId = tabId;

    if (szName) {
        strncpy(pTab->m_szName, szName, 63);
    } else {
        strncpy(pTab->m_szName, "", 63);
    }
    pTab->m_szName[63] = '\0';
    
    pTab->m_dwStatus &= ~1;
    *(uint32*)((uint8*)pTab + 0x2c) = 0x1011cefc;
    *(uint32*)((uint8*)pTab + 0x30) = 0x1011cf18;

    m_apTabs[m_nNumTabs] = pTab;
    m_nNumTabs++;

    if (m_nNumTabs == 1) {
        typedef void (__thiscall *VirtualMethod80)(void*, uint32);
        VirtualMethod80 method80 = (VirtualMethod80)(*(void***)this)[0x80/4];
        method80(this, tabId);
    } else {
        if (m_pActiveTab) {
            typedef void (__thiscall *TabMethod_1006eab0)(Tab*);
            TabMethod_1006eab0 methodEab0 = (TabMethod_1006eab0)0x1006eab0;
            methodEab0(m_pActiveTab);
        }
    }

    LTRect rect;
    typedef void (__thiscall *GetRectFn)(void*, LTRect*);
    GetRectFn getRect = (GetRectFn)0x1006e6c0;
    getRect(this, &rect);

    typedef void (__thiscall *VirtualMethod54)(void*, LTRect*);
    VirtualMethod54 method54 = (VirtualMethod54)(*(void***)this)[0x54/4];
    method54(this, &rect);

    return true;
}

// 0x100727d0
uint32 TabHeader::GetCurrentTabId() {
    if (!m_pActiveTab) return 0xFFFFFFFF;
    return m_pActiveTab->m_nTabId;
}

// 0x100727e0
const char* TabHeader::GetTabName(uint32 tabId) {
    for (uint32 i = 0; i < m_nNumTabs; ++i) {
        if (m_apTabs[i]->m_nTabId == tabId) {
            if (m_apTabs[i]) {
                return m_apTabs[i]->m_szName;
            }
            return nullptr;
        }
    }
    return nullptr;
}

// 0x100728d0
int TabHeader::FindTab(uint32 tabId) {
    for (uint32 i = 0; i < m_nNumTabs; ++i) {
        if (m_apTabs[i]->m_nTabId == tabId) {
            return i;
        }
    }
    return -1;
}

// 0x10072820
bool TabHeader::SelectTab(uint32 tabId) {
    if (m_nNumTabs <= 0) return false;

    Tab* pTab = nullptr;
    for (uint32 i = 0; i < m_nNumTabs; ++i) {
        if (m_apTabs[i]->m_nTabId == tabId) {
            pTab = m_apTabs[i];
            break;
        }
    }

    if (!pTab) return false;

    if (m_pActiveTab) {
        *(uint32*)((uint8*)m_pActiveTab + 0x2c) = 0x1011cefc;
        m_pActiveTab->m_dwStatus &= ~1;
        *(uint32*)((uint8*)m_pActiveTab + 0x30) = 0x1011cf18;
    }

    pTab->m_dwStatus |= 1;
    *(uint32*)((uint8*)pTab + 0x2c) = 0x1011cf34;
    *(uint32*)((uint8*)pTab + 0x30) = 0x1011cf50;

    typedef void (__thiscall *TabMethod_1006eab0)(Tab*);
    TabMethod_1006eab0 methodEab0 = (TabMethod_1006eab0)0x1006eab0;
    methodEab0(pTab);

    uint32 eax = *(uint32*)((uint8*)this + 0x2c);
    m_pActiveTab = pTab;

    typedef void (__thiscall *ThisMethod_1006e920)(void*, uint32, uint32);
    ThisMethod_1006e920 methodE920 = (ThisMethod_1006e920)0x1006e920;
    methodE920(this, eax, tabId);

    return true;
}

// 0x10072900
void TabHeader::SetPageLayout(LTRect* pRect) {
    if (m_nNumTabs == 0) return;

    LTRect rect;
    int x = pRect->left + 1;
    rect.top = pRect->top;
    
    int tabWidth = (pRect->right - 2) / m_nNumTabs;
    rect.bottom = pRect->bottom;

    typedef void (__thiscall *SetRectFn)(Tab*, LTRect*);
    SetRectFn setRect = (SetRectFn)0x1006e650;

    for (uint32 i = 0; i < m_nNumTabs - 1; ++i) {
        rect.left = x;
        rect.right = tabWidth;
        setRect(m_apTabs[i], &rect);
        x += tabWidth;
    }

    rect.left = x;
    rect.right = (pRect->right - 2) - x + (pRect->left + 1);
    setRect(m_apTabs[m_nNumTabs - 1], &rect);
}

// 0x100729c0
bool TabHeader::OnCommand(uint32 cmd, uint32 tabId) {
    typedef uint32 (__thiscall *VirtualMethod78)(void*);
    VirtualMethod78 method78 = (VirtualMethod78)(*(void***)this)[0x78/4];
    uint32 val = method78(this);

    if (val != cmd) {
        typedef void (__thiscall *VirtualMethod80)(void*, uint32);
        VirtualMethod80 method80 = (VirtualMethod80)(*(void***)this)[0x80/4];
        method80(this, cmd);
    }

    return true;
}
