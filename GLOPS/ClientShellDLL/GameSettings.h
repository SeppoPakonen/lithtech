#pragma once

#include "IClientShell.h"

// Define HCONSOLEVAR if not present
#ifndef HCONSOLEVAR
typedef void* HCONSOLEVAR;
#endif

class GameSettings {
public:
    void Init(HCONSOLEVAR hProfileVar, ILTClient* pClient);

    void* m_pUnknown00;
    int m_nBadge;                 // 0x04
    int m_nPlayerBadge;           // 0x08
    int m_nAllowDownloads;        // 0x0C
    int m_nUnknown10;             // 0x10
    int m_nScreenWidth;           // 0x14
    int m_nScreenHeight;          // 0x18
    int m_nBitDepth;              // 0x1C
    int m_nSpDifficulty;          // 0x20
    int m_nUnknown24;             // 0x24
    int m_nMouseLook;             // 0x28
    int m_nInvertMouse;           // 0x2C
    int m_nLookSpring;            // 0x30
    int m_nLookStrafe;            // 0x34
    float m_fTurnRate;            // 0x38
    float m_fLookUpRate;          // 0x3C
    int m_nUseEAX;                // 0x40
    int m_nWeaponKick;            // 0x44
    int m_nMuzzelFlashDLight;     // 0x48 
    int m_nUnknown4C;             // 0x4C
    int m_nBloodSpray;            // 0x50
    int m_nEjectShells;           // 0x54
    int m_nHitPlayerIndicator;    // 0x58
    int m_nClientVoip;            // 0x5C
    int m_nAlwaysRun;             // 0x60
    char m_szName[31];            // 0x64
    char m_szProfileFileName[129];// 0x83
    HCONSOLEVAR m_hProfileVar;    // 0x104
    ILTClient* m_pClient;         // 0x108 
};
