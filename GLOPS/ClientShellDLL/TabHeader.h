#ifndef TABHEADER_H
#define TABHEADER_H

#include "ltbasedefs.h"

class Tab {
public:
    Tab() {
        m_dwStatus = 0;
        m_nTabId = 0;
        m_szName[0] = '\0';
    }
    virtual ~Tab() {}

    uint32 m_pad[12];      // offsets 0x04 to 0x34
    uint32 m_dwStatus;     // offset 0x34
    uint32 m_nTabId;       // offset 0x38
    char m_szName[64];     // offset 0x3c
};

class TabHeader {
public:
    TabHeader();
    virtual ~TabHeader();

    bool AddTab(const char* szName, uint32 tabId); // 0x10072670
    uint32 GetCurrentTabId();                     // 0x100727d0
    const char* GetTabName(uint32 tabId);          // 0x100727e0
    int FindTab(uint32 tabId);                     // 0x100728d0
    bool SelectTab(uint32 tabId);                  // 0x10072820
    void SetPageLayout(LTRect* pRect);             // 0x10072900
    bool OnCommand(uint32 cmd, uint32 tabId);      // 0x100729c0

protected:
    uint32 m_pad[12];      // offsets 0x04 to 0x34
    Tab* m_apTabs[8];      // offset 0x34 (MAX_TABS = 8)
    Tab* m_pActiveTab;     // offset 0x54
    uint32 m_nNumTabs;     // offset 0x58
};

#endif // TABHEADER_H
