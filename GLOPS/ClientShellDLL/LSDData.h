#ifndef LSDDATA_H
#define LSDDATA_H

typedef unsigned int uint32;
typedef unsigned char uint8;

struct Vector {
    float x, y, z;
};

struct LSDQueryResult {
    uint32 unk00; // 0x00
    uint32 unk04; // 0x04
    uint32 unk08; // 0x08
    uint32 unk0C; // 0x0C
    uint32 unk10; // 0x10
    uint32 unk14; // 0x14
    uint32 unk18; // 0x18
}; // 0x1C (28 bytes)

class LSDData {
public:
    LSDData();
    virtual ~LSDData();

    void SetLocalSourceQueryType(uint32 nType); // 0x1008e3a0
    void Think();                               // 0x1008e4d0

protected:
    uint32 m_UnkArray[32];      // 0x00 to 0x80 (guess size to cover eax*8+0x4)
    uint32 m_pad[44];           // 0x80 to 0x124
    Vector m_vPos;              // 0x124
    uint32 m_nSourceQueryType;  // 0x130
    uint32 m_unk134;            // 0x134
    LSDQueryResult m_QueryResults[72]; // 0x138 to 0x918
    float m_fUnk918;            // 0x918
};

#endif // LSDDATA_H
