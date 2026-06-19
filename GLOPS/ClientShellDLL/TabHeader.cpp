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

    pTab->m_nTabId = tabId;
    strncpy(pTab->m_szName, szName, sizeof(pTab->m_szName) - 1);
    pTab->m_szName[sizeof(pTab->m_szName) - 1] = '\0';
    
    // Some abstracted UI initializations
    pTab->m_dwStatus = 0; // State flag (unselected)
    
    m_apTabs[m_nNumTabs] = pTab;
    m_nNumTabs++;

    if (m_nNumTabs == 1) {
        SelectTab(tabId);
    }

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
        if (m_apTabs[i] && m_apTabs[i]->m_nTabId == tabId) {
            return m_apTabs[i]->m_szName;
        }
    }
    return nullptr;
}

// 0x100728d0
int TabHeader::FindTab(uint32 tabId) {
    for (uint32 i = 0; i < m_nNumTabs; ++i) {
        if (m_apTabs[i] && m_apTabs[i]->m_nTabId == tabId) {
            return i;
        }
    }
    return -1;
}

// 0x10072820
bool TabHeader::SelectTab(uint32 tabId) {
    int index = FindTab(tabId);
    if (index < 0) return false;

    Tab* pTab = m_apTabs[index];
    if (!pTab) return false;

    // Abstracted: deselect old tab, select new
    if (m_pActiveTab) {
        m_pActiveTab->m_dwStatus &= ~1; // Remove selected flag
    }
    
    m_pActiveTab = pTab;
    m_pActiveTab->m_dwStatus |= 1; // Set selected flag
    
    // Trigger redraw or internal layout calculation
    return true;
}

// 0x10072900
void TabHeader::SetPageLayout(LTRect* pRect) {
    // Defines dimensions of tab container area
}

// 0x100729c0
bool TabHeader::OnCommand(uint32 cmd, uint32 tabId) {
    // UI click handling -> maps to SelectTab
    return SelectTab(tabId);
}
