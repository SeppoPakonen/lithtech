#include "IClientShell.h"
#include "ILTClient.h"

// Reconstructed Player Movement and Leaning logic
// Derived from 0x10092458 (Leaning) and 0x100316e0 (Input Dispatch)

struct PlayerMovementState {
    float fLeanAmount;      // Offset 0x8d0: -0.2 (Left) to 0.2 (Right)
    float fLeanSpeed;       // Offset 0x35bc: Constant 1.5f observed
    uint32 nPlayerState;    // Offset 0x80: 1=Standing, 2=Crouching, 3=Crawling
    float fEndurance;       // Stamina value (0.0 to 1.0)
};

class CPlayerMovement {
public:
    void Update(float fDeltaTime, GameClientShell* pShell) {
        // 1. Process leaning (Interpolation towards target)
        UpdateLeaning(fDeltaTime, pShell);
        
        // 2. Process locomotion (Velocity updates based on IsCommandOn)
        // ...
    }

    void UpdateLeaning(float fDeltaTime, GameClientShell* pShell) {
        float fTargetLean = 0.0f;
        
        // Check input commands (IDS_ACTIONSTRING_LEAN_LEFT/RIGHT)
        if (pShell->IsCommandOn(COMMAND_LEAN_LEFT)) {
            fTargetLean = -0.2f; // Constant from 0x100bd884
        } else if (pShell->IsCommandOn(COMMAND_LEAN_RIGHT)) {
            fTargetLean = 0.2f;  // Constant from 0x100bd880
        }

        // Interpolate m_fLeanAmount towards fTargetLean
        // Observed at 0x1009246a
        float fLeanSpeed = 1.5f; 
        if (m_fLeanAmount < fTargetLean) {
            m_fLeanAmount += fLeanSpeed * fDeltaTime;
            if (m_fLeanAmount > fTargetLean) m_fLeanAmount = fTargetLean;
        } else if (m_fLeanAmount > fTargetLean) {
            m_fLeanAmount -= fLeanSpeed * fDeltaTime;
            if (m_fLeanAmount < fTargetLean) m_fLeanAmount = fTargetLean;
        }
    }

    float GetStamina(GameClientShell* pShell) {
        // Reconstructed from PullTrigger call at 0x1007c7f3
        // In the binary, this is likely a virtual call to m_pPlayerMgr->GetStamina()
        return m_fEndurance;
    }

private:
    float m_fLeanAmount;
    float m_fEndurance;
};
