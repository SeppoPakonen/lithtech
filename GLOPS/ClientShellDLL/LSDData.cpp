#include "LSDData.h"

// Define engine global pointers and constants referenced in assembly
extern void* g_pLTClient;      // 0x1010cfc8
extern void* g_pPlayerMgr;     // 0x1011a134
extern void* g_pWeaponMgr;     // 0x1011a14c
extern float g_fConst100b83e0; // 0x100b83e0
extern float g_fConst100b834c; // 0x100b834c
extern float g_fConst100b8504; // 0x100b8504

LSDData::LSDData() {
}

LSDData::~LSDData() {
}

// 0x1008e3a0
void LSDData::SetLocalSourceQueryType(uint32 nType) {
    // 1008e3a0: call virtual function 0
    void (**vtable)(LSDData*, uint32, uint32) = *(void (***)(LSDData*, uint32, uint32))this;
    vtable[0](this, this->m_nSourceQueryType, nType);

    uint32 type = nType;
    type--;
    
    if (type == 0) {
        // 0x1008e3f9
        uint32 weaponId = 0xb3;
        void* pWeaponMgr = *(void**)0x1011a14c;
        uint32 (*vfunc100)(void*, uint32) = *(uint32 (**)(void*, uint32))(*(uint32*)pWeaponMgr + 0x190);
        uint32 result = vfunc100(pWeaponMgr, weaponId);
        
        void (*vfunc101)(void*, uint32) = *(void (**)(void*, uint32))(*(uint32*)pWeaponMgr + 0x194);
        vfunc101(pWeaponMgr, result);
    } 
    else {
        type--;
        if (type == 0) {
            // 0x1008e3f2
            uint32 weaponId = 0xb4;
            void* pWeaponMgr = *(void**)0x1011a14c;
            uint32 (*vfunc100)(void*, uint32) = *(uint32 (**)(void*, uint32))(*(uint32*)pWeaponMgr + 0x190);
            uint32 result = vfunc100(pWeaponMgr, weaponId);
            
            void (*vfunc101)(void*, uint32) = *(void (**)(void*, uint32))(*(uint32*)pWeaponMgr + 0x194);
            vfunc101(pWeaponMgr, result);
        } else {
            // 0x1008e3ba
            void* pLTClient = *(void**)0x1010cfc8;
            void (*CPrint)(void*, const char*, uint32) = *(void (**)(void*, const char*, uint32))(*(uint32*)pLTClient + 0x120);
            CPrint(pLTClient, (const char*)0x100de308, 0x58);
            
            void (*DebugOut)(void*, const char*, const char*, uint32) = *(void (**)(void*, const char*, const char*, uint32))(*(uint32*)pLTClient + 0x128);
            DebugOut(pLTClient, (const char*)0x100c5d7c, (const char*)0x100de2cc, nType);
        }
    }
}

// 0x1008e4d0
void LSDData::Think() {
    // 1008e4d8: Clear out spatial buffers loop, zeroing 0x48 elements of size 0x1c
    for (int i = 0; i < 72; ++i) {
        this->m_QueryResults[i].unk00 = 0;
        this->m_QueryResults[i].unk10 = 0;
    }

    // 1008e4f6
    if ((int)this->m_nSourceQueryType < 0) {
        // 1008e500
        void* pLTClient = *(void**)0x1010cfc8;
        void (*CPrint)(void*, const char*, uint32) = *(void (**)(void*, const char*, uint32))(*(uint32*)pLTClient + 0x120);
        CPrint(pLTClient, (const char*)0x100de308, 0x90);
        
        void (*DebugOut)(void*, const char*, const char*) = *(void (**)(void*, const char*, const char*))(*(uint32*)pLTClient + 0x128);
        DebugOut(pLTClient, (const char*)0x100c5d7c, (const char*)0x100de338);
        return;
    }

    // 1008e53a
    void* pPlayerMgr = *(void**)0x1011a134;
    void* pTarget = *(void**)((uint8*)pPlayerMgr + 0x181c8);
    if (!pTarget) return;

    void* (*GetModel)(void*) = *(void* (**)(void*))(*(uint32*)pTarget + 0x3c);
    void* pModel = GetModel(pTarget);
    if (!pModel) return;

    // 1008e55f
    void* pWeaponMgr = *(void**)0x1011a14c;
    void (*GetObjPos)(void*, void*, Vector*) = *(void (**)(void*, void*, Vector*))(*(uint32*)pWeaponMgr + 0x2f0);
    GetObjPos(pWeaponMgr, pModel, &this->m_vPos);

    // 1008e573
    void* pSubMgr = *(void**)((uint8*)pWeaponMgr + 0xc);
    void (*GetObjRotation)(void*, void*, Vector*) = *(void (**)(void*, void*, Vector*))(*(uint32*)pSubMgr + 0x30);
    
    Vector vForward;
    GetObjRotation(pSubMgr, pModel, &vForward);

    // 1008e589: fmul DWORD PTR ds:0x100b83e0, fadd DWORD PTR [esi+0x128]
    float fConst1 = *(float*)0x100b83e0;
    this->m_vPos.y += vForward.y * fConst1;

    // 1008e5a1
    uint32 (*GetPlayerState)(void*) = *(uint32 (**)(void*))(*(uint32*)pTarget + 0x40);
    uint32 state = GetPlayerState(pTarget);

    if (state != 7) {
        // 1008e5af
        uint32 queryType = this->m_nSourceQueryType;
        uint32 *pArray = (uint32*)this;
        uint32 eaxVal;
        
        if (pArray[queryType * 2 + 1] == 2) { // cmp [esi+eax*8+0x4], 2
            eaxVal = pArray[queryType * 2 + 2]; // eax = [esi+eax*8+0x8]
        } else {
            eaxVal = 0;
        }

        // 1008e5c4
        void (*SomeFunc)(void*) = *(void (**)(void*))(*(uint32*)pWeaponMgr + 0xdc);
        SomeFunc(pWeaponMgr);

        // 1008e5cd
        uint32 structOffset = eaxVal * 20; // lea eax, [eax+eax*4]; eax*4 = 20
        float* pStruct = (float*)(0x100de290 + structOffset);

        // 1008e5dc
        float fVal = pStruct[2]; // fmul [edi+0x8] -> fVal = struct.unk08
        this->m_fUnk918 += fVal; // fadd [esi+0x918]

        // 1008e5e5
        float fConst2 = *(float*)0x100b834c;
        if (this->m_fUnk918 <= fConst2) { // fcom ds:0x100b834c
            float fConst3 = *(float*)0x100b8504;
            if (this->m_fUnk918 < fConst3) {
                this->m_fUnk918 = fConst3;
            }
        } else {
            this->m_fUnk918 = fConst2;
        }

        // 1008e61d
        if (this->m_fUnk918 == fConst2 && pStruct[2] == fConst2) { // fcomp
            // 1008e63e
            // call 0x1008e340 -> Some internal method
            void (*SubRoutine)(void*, uint32) = (void (*)(void*, uint32))0x1008e340;
            SubRoutine(this, 0);
        }
    }

    // 1008e643
    // ... further logic would continue here, but this implements the requested logic block
    void (*TargetFunc)(void*) = *(void (**)(void*))(*(uint32*)pTarget);
    TargetFunc(pTarget);

    uint32 state2 = GetPlayerState(pTarget);
    if (state2 != 7 && state2 != 3 && state2 != 4) {
        // 1008e66a
        uint32 (*TargetFunc2)(void*) = *(uint32 (**)(void*))(*(uint32*)pTarget + 0xcc);
        if (!TargetFunc2(pTarget)) return;
    }
}
