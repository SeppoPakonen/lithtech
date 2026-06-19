#ifndef EQUIPITEMCLIENT_H
#define EQUIPITEMCLIENT_H

#include "ltbasedefs.h"

class EquipItemClient {
public:
    virtual ~EquipItemClient() {}
    virtual void UnkMethod1() {}
    virtual uint32 GetType() { return m_nType; } // +0x8 (virtual_method_8)
    virtual void UnkMethod3() {}
    virtual void UnkMethod4() {}
    virtual void UnkMethod5() {}
    virtual void UnkMethod6() {}
    virtual void UnkMethod7() {}
    virtual void UnkMethod8() {}
    virtual void UnkMethod9() {}
    virtual void UnkMethod10() {}
    virtual void UnkMethod11() {}
    virtual void UnkMethod12() {}
    virtual void UnkMethod13() {}
    virtual void UnkMethod14() {}
    virtual bool IsActive() { return m_hObject != nullptr; } // +0x3c (virtual_method_3c)

    HOBJECT m_hObject;          // +0x04
    char    pad_0x08[0x4];
    uint32  m_nItemId;          // +0x0c
    char    pad_0x10[0x8];
    uint32  m_nSlot;            // +0x18
    char    pad_0x1c[0xc];
    float   m_fFloat28;         // +0x28
    char    pad_0x2c[0x18];
    uint32  m_nType;            // +0x44
    char    pad_0x48[0x1c];
    uint32  m_nSomeVal_64;      // +0x64
    char    pad_0x68[0x14];
    uint32  m_nSomeVal_7C;      // +0x7c
    char    pad_0x80[0x80];
    float   m_fFloat100;        // +0x100
    char    pad_0x104[0x8];
    float   m_fFloat10c;        // +0x10c
};

#endif // EQUIPITEMCLIENT_H
