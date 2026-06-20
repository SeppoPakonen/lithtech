#include "ItemInfoWindow.h"

ItemInfoWindow::ItemInfoWindow() {
}

ItemInfoWindow::~ItemInfoWindow() {
}

// 0x1008c130
void* ItemInfoWindow::GetIcon(uint32 itemId) {
    m_nState = 0;
    m_nItemId = itemId;
    
    // Engine pointers
    void** pLTClient = *(void***)0x1011a14c;
    typedef void* (__thiscall* FormatStringFn)(void*, uint32);
    FormatStringFn FormatString = (FormatStringFn)pLTClient[45]; // 0xB4 / 4
    
    typedef void (__thiscall* FreeStringFn)(void*, void*);
    FreeStringFn FreeString = (FreeStringFn)pLTClient[48]; // 0xC0 / 4

    typedef const char* (__thiscall* GetStringDataFn)(void*, void*);
    GetStringDataFn GetStringData = (GetStringDataFn)pLTClient[51]; // 0xCC / 4

    if (itemId > 0x3f) {
        // 1008c61c: bounds check for gadgets/items
        if (itemId < 0x40 || itemId > 0x7f) {
            // 1008c773: clear out 4 elements
            for (int i = 0; i < 4; i++) {
                uint32 offset = 0x1b8 + (i * 0x88);
                *(uint32*)((uint8*)this + offset - 4) = 0xF;
                *(uint16*)((uint8*)this + offset) = 0;
                *(uint16*)((uint8*)this + offset - 0x44) = 0xFFFF;
                *(uint32*)((uint8*)this + 0x160 + (i * 4)) = 0;
            }
            return nullptr;
        }
        
        uint32 gadgetId = itemId - 0x40;
        uint32 maxGadgets = *(uint32*)0x1010cf50;
        
        if (gadgetId >= maxGadgets) {
            return nullptr;
        }
        
        uint8* pGadgetArray = *(uint8**)0x1010cf4c;
        uint8* pGadget = pGadgetArray + (gadgetId * 0x50); // 0x50 size
        
        if (!pGadget) {
            return nullptr;
        }
        
        typedef void (__cdecl* SetStringFn)(void*, uint32, ...);
        SetStringFn SetString = (SetStringFn)0x100a3e5b;

        SetString((uint8*)this + 0x3f4, 0x100d7470, pGadget + 0x44);

        void* hStr582 = FormatString(pLTClient, 0x582);
        uint16 nIconId = *(uint16*)(pGadget + 0xfa);
        SetString((uint8*)this + 0x434, 0x100ddeac, GetStringData(pLTClient, hStr582), nIconId);
        FreeString(pLTClient, hStr582);
        
        if (*(uint16*)(pGadget + 0xf8) > 1) {
            void* hStr585 = FormatString(pLTClient, 0x585);
            SetString((uint8*)this + 0x454, 0x100ddff4, GetStringData(pLTClient, hStr585), *(uint16*)(pGadget + 0xf8));
            FreeString(pLTClient, hStr585);
        } else {
            *(uint8*)((uint8*)this + 0x454) = 0;
        }

        for (int i = 0; i < 4; i++) {
            uint32 offset = 0x1b8 + (i * 0x88);
            *(uint32*)((uint8*)this + offset - 4) = 0xF;
            *(uint16*)((uint8*)this + offset) = 0;
            *(uint16*)((uint8*)this + offset - 0x44) = 0xFFFF;
            *(uint32*)((uint8*)this + 0x160 + (i * 4)) = 0;
        }

        return nullptr;
    }
    
    uint32 maxWeapons = *(uint32*)0x1010cf70;
    if (itemId >= maxWeapons) {
        return nullptr;
    }

    // Looks up weapon/item definitions from GameClientShell/ButeMgr
    // e.g. 1008c16b: mov eax, ds:0x1010cf6c (pointer to weapon array)
    uint8* pWeaponArray = *(uint8**)0x1010cf6c;
    uint8* pWeapon = pWeaponArray + (itemId * 364); // 91 * 4 = 364

    if (!pWeapon) {
        return nullptr;
    }

    // 1008c17b
    void* hStr5d1 = FormatString(pLTClient, 0x5D1);
    void* hStr5d4 = FormatString(pLTClient, 0x5D4);
    void* hStr5ba = FormatString(pLTClient, 0x5BA);

    typedef void (__cdecl* SetStringFn)(void*, uint32, ...);
    SetStringFn SetString = (SetStringFn)0x100a3e5b;

    SetString((uint8*)this + 0x3f4, 0x100d7470, pWeapon + 0x8);
    SetString((uint8*)this + 0x454, 0x100db434, *(uint8*)(pWeapon + 0x128));
    SetString((uint8*)this + 0x474, 0x100db434, *(uint8*)(pWeapon + 0x126));
    SetString((uint8*)this + 0x434, 0x100ddfbc, *(uint16*)(pWeapon + 0x124));

    float fRateOfFire = *(float*)(pWeapon + 0x100);
    void* pRoFStr;
    if (fRateOfFire < *(float*)0x100b83ec) {
        pRoFStr = hStr5d1;
    } else if (fRateOfFire < *(float*)0x100b84d0) {
        pRoFStr = hStr5d4;
    } else {
        pRoFStr = hStr5ba;
    }
    SetString((uint8*)this + 0x4d4, 0x100d7470, GetStringData(pLTClient, pRoFStr));

    uint32 weaponClass = *(uint32*)(pWeapon + 0x4);
    void* pDmgStr = hStr5ba;

    if (weaponClass <= 5) {
        float fDamage = *(float*)(pWeapon + 0x134);
        switch (weaponClass) {
            case 0:
                if (fDamage < *(float*)0x100bd730) pDmgStr = hStr5d1;
                else if (fDamage < *(float*)0x100b84fc) pDmgStr = hStr5d4;
                break;
            case 1:
                if (fDamage < *(float*)0x100bd72c) pDmgStr = hStr5d1;
                else if (fDamage < *(float*)0x100b84fc) pDmgStr = hStr5d4;
                break;
            case 2:
                if (fDamage < *(float*)0x100bd728) pDmgStr = hStr5d1;
                else if (fDamage < *(float*)0x100b8b34) pDmgStr = hStr5d4;
                break;
            case 3:
                if (fDamage < *(float*)0x100bd724) pDmgStr = hStr5d1;
                else if (fDamage < *(float*)0x100b84f8) pDmgStr = hStr5d4;
                break;
            case 4:
                if (fDamage < *(float*)0x100b8b34) pDmgStr = hStr5d1;
                else if (fDamage < *(float*)0x100b84d0) pDmgStr = hStr5d4;
                break;
            case 5:
                if (fDamage < *(float*)0x100bd724) pDmgStr = hStr5d1;
                else if (fDamage < *(float*)0x100b84f8) pDmgStr = hStr5d4;
                break;
        }
    }
    SetString((uint8*)this + 0x4b4, 0x100d7470, GetStringData(pLTClient, pDmgStr));

    FreeString(pLTClient, hStr5d1);
    FreeString(pLTClient, hStr5d4);
    FreeString(pLTClient, hStr5ba);

    for (int i = 0; i < 4; i++) {
        uint32 offset = 0x174 + (i * 0x88);
        *(uint32*)((uint8*)this + offset + 0x40) = 0xF;
        *(uint16*)((uint8*)this + offset) = 0xFFFF;
        *(uint32*)((uint8*)this + 0x160 + (i * 4)) = 0;
    }

    return nullptr;
}
