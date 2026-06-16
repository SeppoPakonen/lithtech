#include "CameraManager.h"
#include "IClientShell.h"

extern IClientShell* g_pLTClient;

CPlayerCamera::CPlayerCamera() : m_fCurrentZoomScale(0.0f), m_fPitchKick(0.0f), m_fYawKick(0.0f), m_hCamera(nullptr) {
}

CPlayerCamera::~CPlayerCamera() {
}

void CPlayerCamera::Update(float fDeltaTime) {
    // 1. Calculate base position from player entity
    // 2. Apply leaning offsets (Q/E)
    // 3. Apply recoil spring decay
    
    m_fPitchKick *= 0.9f; // Pseudo-spring decay
    m_fYawKick *= 0.9f;
}

// Reconstructed from 0x1009dd20
void CPlayerCamera::SetZoom(float fZoomScale) {
    if (fZoomScale <= 0.0f) {
        // Reset to normal FOV
        if (m_hCamera) {
            // Reconstructed ILTClient::SetCameraFOV (vtable 0x340)
            // g_pLTClient->SetCameraFOV(m_hCamera, 1.396f, 1.1868f); 
        }
        
        // Reset zoomscale and LOD offset via console
        // g_pLTClient->RunConsoleString("zoomscale 0.0f");
        // g_pLTClient->RunConsoleString("+ModelLODOffset 0.0f");
        return;
    }

    // Apply active zoom
    m_fCurrentZoomScale = fZoomScale;

    // Format string: "zoomscale %f"
    char szConsoleCmd[64];
    sprintf(szConsoleCmd, "zoomscale %f", fZoomScale);
    
    // Call ILTClient::RunConsoleString (vtable 0x2d4)
    // g_pLTClient->RunConsoleString(szConsoleCmd);

    // Apply new FOV calculation
    float fNewFovX = 1.396f / fZoomScale;
    float fNewFovY = 1.1868f / fZoomScale;
    
    if (m_hCamera) {
        // g_pLTClient->SetCameraFOV(m_hCamera, fNewFovX, fNewFovY);
    }
}

void CPlayerCamera::ApplyWeaponKick(float fPitch, float fYaw) {
    m_fPitchKick += fPitch;
    m_fYawKick += fYaw;
}
