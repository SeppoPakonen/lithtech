#include "EquipSelectWidget.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class CWidget {
public:
    virtual ~CWidget() {}
    virtual void Virt50(uint32 arg1, uint32 arg2) {}
    virtual void Virt58(uint32 arg1, uint32 arg2) {}

    uint32 field_4;
};

extern "C" void Func_1004b7a0(void* pGlobal, uint32 itemId, uint32 val, void* pDest);

class EquipSelector {
public:
    EquipSelector();
    ~EquipSelector();

    void ResetSlots();
    void UpdateSlot(uint32 slot, uint32 itemId, uint32 val1, uint32 val2);

    void SetWeaponSlot(uint32 slot, uint32 weaponId);

private:
    char pad_00[0x2c];
    CWidget* m_pWidgets[9];
    uint32 m_widgetData[9][3];
    uint32 m_itemIds[9];
    uint32 m_val2s[9];
};

EquipSelector::EquipSelector() {
}

EquipSelector::~EquipSelector() {
}

void EquipSelector::ResetSlots() {
    for (int i = 0; i < 9; ++i) {
        m_itemIds[i] = 0xFFFFFFFF;
        m_val2s[i] = 0;
    }

    for (int i = 0; i < 3; ++i) {
        if (m_pWidgets[i]) {
            m_pWidgets[i]->Virt58(0xFFFFFFFF, 0);
        }
        m_widgetData[i][0] = 0;
        m_widgetData[i][1] = 0;
        m_widgetData[i][2] = 0;
    }

    for (int i = 3; i < 9; ++i) {
        if (m_pWidgets[i]) {
            m_pWidgets[i]->Virt50(0xFFFFFFFF, 0);
        }
        m_widgetData[i][0] = 0;
        m_widgetData[i][1] = 0;
        m_widgetData[i][2] = 0;
    }
}

void EquipSelector::UpdateSlot(uint32 slot, uint32 itemId, uint32 val1, uint32 val2) {
    if (slot > 8) {
        if (g_pLTClient) {
            g_pLTClient->CPrint("Invalid slot %d for update!", slot);
        }
        return;
    }

    m_itemIds[slot] = itemId;
    m_val2s[slot] = val2;

    if (slot < 3) {
        if (m_pWidgets[slot]) {
            m_pWidgets[slot]->Virt58(itemId, val1);
            
            void* pGlobal = (void*)0x1011be5c;
            Func_1004b7a0(pGlobal, itemId, m_pWidgets[slot]->field_4, &m_widgetData[slot][0]);
        }
    } else {
        if (m_pWidgets[slot]) {
            m_pWidgets[slot]->Virt50(itemId, 0);
            
            void* pGlobal = (void*)0x1011be5c;
            Func_1004b7a0(pGlobal, itemId, m_pWidgets[slot]->field_4, &m_widgetData[slot][0]);
        }
    }
}

void EquipSelector::SetWeaponSlot(uint32 slot, uint32 weaponId) {
}
