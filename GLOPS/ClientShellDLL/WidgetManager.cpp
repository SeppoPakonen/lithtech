#include "WidgetManager.h"

CWidgetMgr* g_pWidgetMgr = (CWidgetMgr*)0x101240d8;

// 0x1006e980: Main Widget Render Loop
void CWidgetMgr::Render() {
    // 1006e993: call [eax+0x58] - PreRender?
    // (this->*vtable[0x58/4])(1, 0);

    // Traverse Widget tree (1006ea02: mov esi, [esi+0xc])
    for (CWidget* pWidget = m_pFirstChild; pWidget != nullptr; pWidget = pWidget->GetNextSibling()) {
        if (pWidget->IsVisible()) {
            // 1006ea11: call 0x1006ebc0 (RenderWidget)
            pWidget->Render();
        }
    }
}

// 0x1006ebc0: Render an individual widget and its children
void CWidget::Render() {
    // 1006ec17: call [edx+0x64] - Virtual Render Call
    // (this->*vtable[0x64/4])();

    // Render children (1006ec1a: mov esi, [edi+0xc])
    for (CWidget* pChild = m_pFirstChild; pChild != nullptr; pChild = pChild->GetNextSibling()) {
        if (pChild->IsVisible()) {
            pChild->Render();
        }
    }
}
