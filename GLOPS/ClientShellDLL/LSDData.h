#ifndef LSDDATA_H
#define LSDDATA_H

#include "ltbasedefs.h"

class LSDData {
public:
    LSDData();
    virtual ~LSDData();

    void SetLocalSourceQueryType(); // 0x1008e3a0
    void Think();                   // 0x1008e4d0

protected:
    uint32 m_pad[76];       // pad to 0x130
    uint32 m_nSourceQueryType; // 0x130
    // Additional unknown tracking data up to 0x918
};

#endif // LSDDATA_H
