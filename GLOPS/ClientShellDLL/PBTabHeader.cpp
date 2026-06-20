#include "PBTabHeader.h"
#include "ILTClient.h"

// 0x100729f0: PBTabHeader::AddTab
bool PBTabHeader::AddTab(const char* szName, uint32 tabId) {
    if (m_nNumTabs >= 8) {
        // Log error
        return false;
    }

    PBTab* pTab = new PBTab();
    if (!pTab) return false;

    pTab->m_nTabId = tabId;
    strncpy(pTab->m_szName, szName, sizeof(pTab->m_szName) - 1);
    pTab->m_szName[sizeof(pTab->m_szName) - 1] = '\0';
    pTab->m_dwStatus = 0;

    m_apTabs[m_nNumTabs] = pTab;
    m_nNumTabs++;

    if (m_nNumTabs == 1) {
        SelectTab(tabId);
    }

    return true;
}

// 0x10072b60
uint32 PBTabHeader::GetActiveTabProperty() {
    if (m_pActiveTab) {
        return m_pActiveTab->m_pad[9]; // offset 0x2C
    }
    return 0xFFFFFFFF;
}

// 0x10072b70
PBTab* PBTabHeader::GetTab(uint32 tabId) {
    for (int i = 0; i < m_nNumTabs; i++) {
        if (m_apTabs[i] && m_apTabs[i]->m_pad[9] == tabId) { // offset 0x2C
            return (PBTab*)m_apTabs[i];
        }
    }
    return nullptr;
}

// 0x10072bc0
bool PBTabHeader::SelectTabByProperty(uint32 propId) {
    for (int i = 0; i < m_nNumTabs; i++) {
        if (m_apTabs[i] && m_apTabs[i]->m_pad[9] == propId) { // offset 0x2C
            if (m_pActiveTab) {
                m_pActiveTab->m_dwStatus &= ~1;
            }
            m_pActiveTab = m_apTabs[i];
            m_pActiveTab->m_dwStatus |= 1;
            return true;
        }
    }
    return false;
}

// 0x10072c60
int PBTabHeader::GetTabProperty(uint32 propId) {
    for (int i = 0; i < m_nNumTabs; i++) {
        if (m_apTabs[i] && m_apTabs[i]->m_pad[9] == propId) {
            return i;
        }
    }
    return -1;
}

// 0x10072c90: PBTabHeader::Draw
void PBTabHeader::Draw() {
    if (!m_nNumTabs) return;

    // Drawing logic...
}

// 0x10072da0: PBTabHeader::Create
bool PBTabHeader::Create(const char* szName) {
    return true;
}

// 0x10072eb0: PBTabHeader::Update
void PBTabHeader::Update() {
    if (m_pActiveTab) {
        // Update active tab logic
    }
}

// 0x10072ed0
bool PBTabHeader::OnCommand(uint32 cmd, uint32 tabId) {
    return SelectTab(tabId);
}

// 0x10072f10: PBTabHeader::Init
void PBTabHeader::Init() {
    // Initialization logic
}

// 0x10073030: PBTabHeader::Destroy
void PBTabHeader::Destroy() {
    for (uint32 i = 0; i < m_nNumTabs; ++i) {
        if (m_apTabs[i]) {
            delete m_apTabs[i];
            m_apTabs[i] = nullptr;
        }
    }
    m_nNumTabs = 0;
    m_pActiveTab = nullptr;
}

// 0x10073100
bool PBTabHeader::HandleEvent(uint32 eventId) {
    return true;
}

// 0x10073120: PBTabHeader::SetTabHeaderName
void PBTabHeader::SetTabHeaderName(const char* name) {
    // Logic to set tab header name
}

// 0x10073190: PBTabHeader::PBTabHeader
PBTabHeader::PBTabHeader() {
    m_nNumTabs = 0;
    m_pActiveTab = nullptr;
    memset(m_apTabs, 0, sizeof(m_apTabs));
}

// 0x10073210
void PBTabHeader::Cleanup() {
    Destroy();
}

// 0x10073230
void PBTabHeader::Reset() {
    m_nNumTabs = 0;
}

// 0x10073290
void PBTabHeader::UpdateLayout() {
    // Update Layout logic
}

