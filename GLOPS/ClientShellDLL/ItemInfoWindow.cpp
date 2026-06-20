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
    
    typedef void* (__thiscall* GetSurfaceFn)(void*, uint32);
    GetSurfaceFn GetSurface = (GetSurfaceFn)pLTClient[48]; // 0xC0 / 4

    typedef void (__thiscall* FreeStringFn)(void*, void*);
    FreeStringFn FreeString = (FreeStringFn)pLTClient[51]; // 0xCC / 4

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
        
        // 1008c659
        uint16 nGadgetNameId = *(uint16*)(pGadget + 0x44);
        void* pGadgetNameStr = FormatString(pLTClient, nGadgetNameId);
        
        uint16 nIconId = *(uint16*)(pGadget + 0xfa);
        void* pGadgetIcon = GetSurface(pLTClient, nIconId);
        
        FreeString(pLTClient, pGadgetNameStr);
        
        return pGadgetIcon;
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

    // Checks properties like damage, accuracy, rate of fire, etc.
    float fRateOfFire = *(float*)(pWeapon + 0x100);
    float fRefRoF = *(float*)0x100b83ec;
    
    if (fRateOfFire >= fRefRoF) {
        FreeString(pLTClient, hStr5ba);
    }

    // 1008c2b3: fld DWORD PTR [edi+0x134] (property value check)
    float fDamage = *(float*)(pWeapon + 0x134);
    float fDamageRef = *(float*)0x100bd730;
    
    if (fDamage < fDamageRef) {
        FreeString(pLTClient, hStr5d4);
    }
    
    // Clean up remaining strings
    FreeString(pLTClient, hStr5d1);

    // Converts values into UI progress bar metrics (0 to 10 scale)
    // 1008c49e: clear UI elements loop
    for (int i = 0; i < 4; i++) {
        uint32 offset = 0x174 + (i * 0x88);
        *(uint32*)((uint8*)this + offset + 0x40) = 0xF;
        *(uint16*)((uint8*)this + offset) = 0xFFFF;
        *(uint32*)((uint8*)this + 0x160 + (i * 4)) = 0;
    }

    // Switch table at 1008c7bc determines which specific icon/texture to return
    // depending on the subclass of item (assault rifle, sniper, gadget)
    uint32 weaponClass = *(uint32*)(pWeapon + 0x4);
    void* pIcon = nullptr;
    if (weaponClass <= 5) {
        // Look up switch table offset and call GetSurface (simplified)
        pIcon = GetSurface(pLTClient, weaponClass);
    }

    return pIcon; // Returns texture handle
}
