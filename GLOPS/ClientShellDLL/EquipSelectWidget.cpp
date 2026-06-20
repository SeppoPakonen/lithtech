#include "EquipSelectWidget.h"
#include "GameClientShell.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

EquipSelectWidget::EquipSelectWidget() {
}

// 0x10084500
void EquipSelectWidget::Init() {
    uint32* pGlobal = *(uint32**)0x10124310;
    uint32 playerClass = pGlobal ? pGlobal[0x60 / 4] : 0;

    if (m_nSelectedSpecialty != playerClass) {
        m_nSelectedSpecialty = playerClass;
        if (playerClass > 7) {
            m_dwClassMask = 0;
        } else {
            switch (playerClass) {
                case 0: m_dwClassMask = 0x20; break;
                case 1: m_dwClassMask = 0x22; break;
                case 2: m_dwClassMask = 0x32; break;
                case 3: m_dwClassMask = 0x1ff; break;
                default: m_dwClassMask = 0; break;
            }
        }
    }

    if (m_pEquipSelector) {
        *(uint32*)((char*)m_pEquipSelector + 0xc94) = m_dwClassMask;
    }

    UpdateFromPlayer();

    m_anSlotIndices[0] = 0xffffffff;
    m_anSlotIndices[1] = 0xffffffff;

    uint32 slotIdx = 0;
    for (uint32 i = 0; i < 3; ++i) {
        uint32 idx = m_nSelectedSpecialty * 3 + i;
        if (*(uint32*)(0x100bcc00 + idx * 4) != 0) {
            if (slotIdx < 2) {
                m_anSlotIndices[slotIdx] = i;
                slotIdx++;
            }
        }
    }

    void** pStringMgr = *(void***)0x1010cfc8;
    if (pStringMgr) {
        typedef void (__thiscall *FnLoadString)(void*, uint32, uint32);
        FnLoadString loadString = *(FnLoadString*)(*(uint32*)pStringMgr + 0x120);
        loadString(pStringMgr, 0x100ddd4c, 0x94c);

        typedef void (__cdecl *FnFormatString)(void*, uint32, uint32, uint32);
        FnFormatString formatString = *(FnFormatString*)(*(uint32*)pStringMgr + 0x128);
        formatString(pStringMgr, 0x100c5d7c, 0x100dde1c, 2);
    }

    if (g_pGameClientShell) {
        CMoveMgr* pMoveMgr = g_pGameClientShell->GetMoveMgr();
        if (pMoveMgr) {
            m_nMoveMgrVal140 = *(uint32*)((char*)pMoveMgr + 0x140);
            m_nMoveMgrValB8 = *(uint32*)((char*)pMoveMgr + 0xb8);
        }
    }

    Method_86f30();

    typedef void (__thiscall *FnUpdateState)(void*, uint32, uint32);
    FnUpdateState updateState = (FnUpdateState)0x1006e780;

    if (m_pWidgetEE4) {
        *(uint32*)((char*)m_pWidgetEE4 + 0x2c) = 0;
        updateState(m_pWidgetEE4, 0, 2);

        void* subWidget = *(void**)((char*)m_pWidgetEE4 + 0x88);
        if (subWidget) {
            uint32* pArray = (uint32*)((char*)subWidget + 0x2c);
            for (int i = 0; i < 10; ++i) {
                if (pArray[i] != 0) {
                    *(uint32*)(pArray[i] + 0x100) = 0;
                }
            }
        }
    }

    if (pStringMgr && m_pEquipSelector) {
        uint32 temp1 = 0, temp2 = 0;
        typedef void* (__cdecl *FnFormatStr)(void*, void*);
        FnFormatStr formatStr = *(FnFormatStr*)((char*)pStringMgr + 0x1e0);
        void* pStr = formatStr(&temp2, &temp1);

        typedef void (__cdecl *FnFreeStr)(void*);
        FnFreeStr freeStr = *(FnFreeStr*)((char*)pStringMgr + 0x210);
        freeStr(pStr);

        *(uint32*)((char*)m_pEquipSelector + 0x14c) = 0;
        updateState(m_pEquipSelector, 0, 2);
    }

    if (m_pItemInfoWindow) {
        *(uint32*)((char*)m_pItemInfoWindow + 0x394) = 0;
    }

    if (m_dwClassMask == 0x1ff) {
        SomeMethod_85720(0xff);
    } else if (m_dwClassMask & 4) {
        SomeMethod_85720(1);
    } else {
        SomeMethod_85720(0);
    }
}

// 0x10084710
void EquipSelectWidget::UpdateSelection() {
    for (uint32 ebx = 0; ebx <= 8; ++ebx) {
        SomeMethod_85720(ebx);
        
        uint32 val = m_aSomeArray[m_nSomeVal_16d0][ebx].field_0;
        if (val == 0xff) {
            continue;
        }
        
        uint32 field4 = m_aSomeArray[m_nSomeVal_16d0][ebx].field_4;
        if (field4 == 0) {
            SomeMethod_10086b20(val);
            continue;
        }
        
        for (uint32 edi = 0; edi < 3; ++edi) {
            uint32 field1C_edi = m_aSomeArray[m_nSomeVal_16d0][ebx].field_1C[edi];
            if (field1C_edi == 0) {
                SomeMethod_100862a0(edi);
            }
        }
    }
    SomeMethod_85720(m_nSomeVal_16cc);
}

// 0x100847a0
void EquipSelectWidget::UpdateFromPlayer() {
    CMoveMgr* pMoveMgr = g_pGameClientShell ? g_pGameClientShell->GetMoveMgr() : nullptr;
    if (!pMoveMgr) return;
    
    if (m_pEquipSelector) {
        m_pEquipSelector->ResetSlots();
    }
    if (m_pItemInfoWindow) {
        m_pItemInfoWindow->ClearInfo(0xff);
    }
    
    for (uint32 edi = 0; edi <= 8; ++edi) {
        void* pWeapon = *(void**)((char*)pMoveMgr + 0x5c + edi*4);
        bool hasWeapon = false;
        
        if (pWeapon) {
            typedef bool (__thiscall *FnIsWeapon)(void*);
            FnIsWeapon isWeapon = *(FnIsWeapon*)(*(uint32*)pWeapon + 0x3c);
            hasWeapon = isWeapon(pWeapon);
        }
        
        if (!hasWeapon) {
            if (m_aSomeArray[m_nSomeVal_16d0][edi].field_0 != 0xff && 
                m_aSomeArray[m_nSomeVal_16d0][edi].field_8 != 0) {
                
                m_aSomeArray[m_nSomeVal_16d0][edi].field_0 = 0xff;
                m_aSomeArray[m_nSomeVal_16d0][edi].field_8 = 0;
                m_aSomeArray[m_nSomeVal_16d0][edi].field_4 = 0;
                for (int i = 0; i < 4; ++i) {
                    m_aSomeArray[m_nSomeVal_16d0][edi].field_C[i] = 0xffffffff;
                    m_aSomeArray[m_nSomeVal_16d0][edi].field_1C[i] = 0;
                }
                if (m_pEquipSelector) {
                    m_pEquipSelector->UpdateSlot(edi, 0xff, 0, 0);
                }
            }
            continue;
        }
        
        typedef int (__thiscall *FnGetWeaponType)(void*);
        FnGetWeaponType getWeaponType = *(FnGetWeaponType*)(*(uint32*)pWeapon + 0x8);
        int weaponType = getWeaponType(pWeapon);
        
        uint32 id = *(uint32*)((char*)pWeapon + 0xc);
        uint32 slot = edi;
        
        if (weaponType == 0) {
            uint32 val = *(uint32*)((char*)pWeapon + 0x7c);
            if (id != 0xff) {
                uint32 state = *(uint32*)((char*)pWeapon + 0x18);
                if (state == 1) {
                    id += 0x40;
                } else if (state != 0) {
                    id = 0xff;
                }
            }
            SomeMethod_10086940(id, slot, val);
        } else if (weaponType == 2 || weaponType == 3) {
            if (id != 0xff) {
                uint32 state = *(uint32*)((char*)pWeapon + 0x18);
                if (state == 1) {
                    id += 0x40;
                } else if (state != 0) {
                    id = 0xff;
                }
            }
            SomeMethod_10086940(id, slot, 0);
        }
    }
    
    Method_86f30();
}

void EquipSelectWidget::SomeMethod_85720(uint32 index) {}
void EquipSelectWidget::SomeMethod_10086b20(uint32 id) {}
void EquipSelectWidget::SomeMethod_100862a0(uint32 index) {}
void EquipSelectWidget::SomeMethod_10086940(uint32 id, uint32 slot, uint32 val) {}
void EquipSelectWidget::Method_86f30() {}
