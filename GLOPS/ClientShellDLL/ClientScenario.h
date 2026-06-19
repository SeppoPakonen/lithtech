#ifndef CLIENTSCENARIO_H
#define CLIENTSCENARIO_H

#include "ltbasedefs.h"

class ClientScenario {
public:
    ClientScenario();
    virtual ~ClientScenario();

    void AddScenario(); // 0x1001ef40

protected:
    void* m_pad;                     // +0x00
    char* m_szDescriptionPara1;      // +0x04
    char* m_szDescriptionPara2;      // +0x08
    char* m_szDescriptionPara3;      // +0x0c
    char* m_szLocation;              // +0x10
    char* m_szMonth;                 // +0x14
    int   m_nHour;                   // +0x18
    int   m_nYear;                   // +0x1c
    int   m_nMinutes;                // +0x20
    int   m_nSeconds;                // +0x24
    void* m_hSatImageTexture;        // +0x28
    float m_fLongitude;              // +0x2c
    float m_fLatitude;               // +0x30
};

#endif // CLIENTSCENARIO_H
