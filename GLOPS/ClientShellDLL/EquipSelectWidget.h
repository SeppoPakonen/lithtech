#ifndef EQUIPSELECTWIDGET_H
#define EQUIPSELECTWIDGET_H

#include "ltbasedefs.h"
#include "WidgetManager.h"

// Forward declarations
class EquipSelector {
public:
    void ResetSlots(); // 0x1008b1a0
    void UpdateSlot(uint32 slot, uint32 itemId, uint32 val1, uint32 val2); // 0x1008b230
};

class ItemInfoWindow {
public:
    void ClearInfo(uint32 val); // 0x1008c130
};

struct EquipSelectItem {
    uint32 field_0;           // offset 0 (ID)
    uint32 field_4;           // offset 4
    uint32 field_8;           // offset 8
    uint32 field_C[4];        // offset 12 - size 4!
    uint32 field_1C[4];       // offset 28 - size 4!
};

class EquipSelectWidget : public CWidget {
public:
    EquipSelectWidget();
    virtual ~EquipSelectWidget() {}

    void Init();               // 0x10084500
    void UpdateSelection();    // 0x10084710
    void UpdateFromPlayer();   // 0x100847a0

    // Member helper functions
    void SomeMethod_85720(uint32 index); // 0x10085720
    void SomeMethod_10086b20(uint32 id); // 0x10086b20
    void SomeMethod_100862a0(uint32 index); // 0x100862a0
    void SomeMethod_10086940(uint32 id, uint32 slot, uint32 val); // 0x10086940
    void Method_86f30();                 // 0x10086f30

protected:
    char pad_0x1c[0xedc - 0x1c]; // Pad from CWidget to 0xedc
    EquipSelector* m_pEquipSelector;        // +0xedc (was m_pSomeSubWidget)
    ItemInfoWindow* m_pItemInfoWindow;      // +0xee0 (was m_pAnotherSubWidget)
    CWidget* m_pWidgetEE4;                  // +0xee4
    
    char pad_0xee8[0x28];        // Pad to 0xf10
    EquipSelectItem m_aSomeArray[2][9]; // +0xf10
    
    char pad_0x1228[0x16cc - 0x1228]; // Pad to 0x16cc
    uint32 m_nSomeVal_16cc;     // +0x16cc
    uint32 m_nSomeVal_16d0;     // +0x16d0
    uint32 m_nMoveMgrVal140;    // +0x16d4
    uint32 m_anSlotIndices[2];  // +0x16d8
    uint32 m_nSelectedSpecialty;// +0x16e0
    uint32 m_dwClassMask;       // +0x16e4
    
    char pad_0x16e8[0x30];      // Pad to 0x1718
    uint32 m_nMoveMgrValB8;     // +0x1718
};

#endif // EQUIPSELECTWIDGET_H
