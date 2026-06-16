#ifndef SURFACEFX_H
#define SURFACEFX_H

#include "ltbasedefs.h"

// Surface Types reconstructed from decal naming conventions and sound folders
enum SurfaceType {
    SURFACE_UNKNOWN = 0,
    SURFACE_CONCRETE,
    SURFACE_METAL_THIN,
    SURFACE_METAL_THICK,
    SURFACE_WOOD_THIN,
    SURFACE_WOOD_THICK,
    SURFACE_GLASS,
    SURFACE_FLESH,
    SURFACE_DIRT,
    SURFACE_WATER,
    SURFACE_PLASTIC,
    SURFACE_MAX
};

// Surface properties for impact effects and sounds
struct SurfaceProps {
    uint32 nId;
    char szName[32];
    
    // Impact Decals (w_<name>_enter0.spr)
    char szImpactSprite[64];
    
    // Sound Directories
    char szFootstepDir[64];  // e.g. "globalops\sounds\surface\footstep\concrete\"
    char szImpactDir[64];    // e.g. "globalops\sounds\surface\impact\concrete\"
    char szGrenadeDir[64];
    char szShellDir[64];
    
    uint32 nSoundVariations; // Usually 0-10
};

// Global Surface Manager (part of FXManager or standalone)
class CSurfaceMgr {
public:
    virtual void PlayImpactSound(SurfaceType eType, const LTVector& vPos);
    virtual void PlayFootstepSound(SurfaceType eType, bool bLeftFoot);
    
    // Logic from 0x10014b60 (Init)
    virtual bool Init();
    
private:
    SurfaceProps m_aSurfaces[SURFACE_MAX];
};

#endif // SURFACEFX_H
