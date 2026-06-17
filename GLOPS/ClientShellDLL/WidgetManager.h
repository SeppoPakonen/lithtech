#ifndef WIDGETMANAGER_H
#define WIDGETMANAGER_H

#include "ILTClient.h"

class CWidget {
public:
    virtual ~CWidget() {}
    virtual void Update(float fDeltaTime) = 0; // 0x04
    virtual void Render() = 0;                 // 0x08
    virtual void OnMessage(uint32 nMessageID, ILTMessage_Read* pMsg) = 0; // 0x0C
    
    // Identified from assembly offsets:
    // 0x1006e980 rendering loop
    CWidget* GetParent() const { return m_pParent; }
    CWidget* GetFirstChild() const { return m_pFirstChild; }
    CWidget* GetNextSibling() const { return m_pNextSibling; }
    
    bool IsVisible() const { return (m_nFlags & 0x1) != 0; }

protected:
    void* vtable;            // +0x00
    CWidget* m_pParent;      // +0x04
    CWidget* m_pFirstChild;  // +0x0c (observed in 1006ea02)
    CWidget* m_pNextSibling; // +0x14 (observed in 1006ea16)
    uint32 m_nFlags;         // +0x18 (observed in 1006e996)
};

class CWidgetMgr : public CWidget {
public:
    // 0x1006e980: Main Render Loop
    void Render() override;
    
    // 0x1006f690: HandleInput or similar
    void HandleInput(uint32 nMsg, uint32 nParam1, uint32 nParam2);

private:
    CWidget* m_pFocusWidget; // +0x2c or +0x30
    // ... more members from WidgetManager.cpp stubs ...
};

extern CWidgetMgr* g_pWidgetMgr; // ds:0x101240d8 (identified from 1006e9ac)

#endif // WIDGETMANAGER_H
