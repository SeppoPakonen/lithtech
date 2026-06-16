#include "SurfaceFX.h"
#include <cstdlib>
#include <cstdio>

// Simplified Surface Manager implementation
// Reconstructed from 0x10014b60 and 0x10015157

bool CSurfaceMgr::Init() {
    // Parser at 0x10014b60 initializes surface properties
    // In a real environment, this reads from surfaces.txt
    
    // Example: Concrete
    m_aSurfaces[SURFACE_CONCRETE].nId = SURFACE_CONCRETE;
    strcpy(m_aSurfaces[SURFACE_CONCRETE].szName, "Concrete");
    strcpy(m_aSurfaces[SURFACE_CONCRETE].szImpactSprite, "w_concrete_enter0.spr");
    strcpy(m_aSurfaces[SURFACE_CONCRETE].szFootstepDir, "globalops\\sounds\\surface\\footstep\\concrete\\");
    strcpy(m_aSurfaces[SURFACE_CONCRETE].szImpactDir, "globalops\\sounds\\surface\\impact\\concrete\\");
    m_aSurfaces[SURFACE_CONCRETE].nSoundVariations = 10;
    
    return true;
}

void CSurfaceMgr::PlayImpactSound(SurfaceType eType, const LTVector& vPos) {
    if (eType <= SURFACE_UNKNOWN || eType >= SURFACE_MAX) return;
    
    SurfaceProps& props = m_aSurfaces[eType];
    
    // Logic from 0x10012ae0: Variation = rand() % nVariations
    int nVar = (rand() % props.nSoundVariations) + 1;
    
    char szPath[256];
    sprintf(szPath, "%s%02d.wav", props.szImpactDir, nVar);
    
    // Trigger Sound (vtable call to GoSound / CSoundMgr)
    // g_pSoundMgr->PlaySound3D(szPath, vPos, 1.0f);
}

void CSurfaceMgr::PlayFootstepSound(SurfaceType eType, bool bLeftFoot) {
    if (eType <= SURFACE_UNKNOWN || eType >= SURFACE_MAX) return;

    SurfaceProps& props = m_aSurfaces[eType];
    int nVar = (rand() % props.nSoundVariations) + 1;

    char szPath[256];
    sprintf(szPath, "%s%02d.wav", props.szFootstepDir, nVar);

    // Trigger local sound
    // g_pSoundMgr->PlaySoundLocal(szPath, 1.0f);
}
