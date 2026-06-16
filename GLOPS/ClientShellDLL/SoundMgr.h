#ifndef SOUNDMGR_H
#define SOUNDMGR_H

#include "ltbasedefs.h"

// Sound Buffer object allocated at 0x10015d10
struct SoundBuffer {
    char szPath[100];      // 0x00 - 100 bytes
    uint32 nFlags;         // 0x64
    SoundBuffer* pNext;    // 0x68
};

// Gun Sound Attributes from gunsounds.txt (0x100144e2)
struct GunSoundAttributes {
    uint32 nVariations;    // Variations
    char szFireSound[64];  // FireSound path
    uint8 nVolumeScale;    // VolumeScale (0-255)
    float fInnerDistance;  // InnerDistance
    float fOuterDistance;  // OuterDistance
    float fLowerPitch;     // LowerPitch
    float fUpperPitch;     // UpperPitch
    
    // Additional sounds found in mapping.csv
    char szClipIn[64];
    char szClipOut[64];
    char szDryFire[64];
    char szHammerPull[64];
};

// Global Sound Manager found at GoSound.cpp (0x1003d7f0)
class CSoundMgr {
public:
    // Mapped from 0x1003d7f0
    virtual uint32 AddAmbience(const char* szFile, float fVolume, bool bLoop);
    
    // Mapped from 0x10099230 (Miles Wrapper)
    virtual void PlaySample(SoundBuffer* pBuffer, float fVolume, float fPitch);
    
private:
    uint32 m_nNumAmbiences; // ds:0x1011210c
    void* m_pAmbiences[80]; // ds:0x101135d4
};

#endif // SOUNDMGR_H
