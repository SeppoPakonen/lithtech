#ifndef CAMERAMANAGER_H
#define CAMERAMANAGER_H

#include "ltbasedefs.h"

// Forward declarations
class IClientShell;

class CPlayerCamera {
public:
    CPlayerCamera();
    ~CPlayerCamera();

    // Updates camera position, rotation, recoil bob, and leaning
    void Update(float fDeltaTime);

    // Zoom scaling (0x1009dd20)
    // Invoked by GunClient for scoped weapons
    void SetZoom(float fZoomScale);

    // Applies weapon recoil punch to the camera angles
    void ApplyWeaponKick(float fPitch, float fYaw);

private:
    LTVector m_vPos;
    LTRotation m_rRot;
    
    // Zoom state
    float m_fCurrentZoomScale;
    
    // Recoil state
    float m_fPitchKick;
    float m_fYawKick;

    // Engine handle
    HOBJECT m_hCamera;
};

#endif // CAMERAMANAGER_H
