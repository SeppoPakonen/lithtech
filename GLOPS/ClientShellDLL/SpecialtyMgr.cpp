#include "Specialty.h"
#include "IClientShell.h"
#include "ILTClient.h"

// Reconstructed Specialty Management logic
// Based on 0x10007370 (Specialty Check) and 0x1008258a (Selection)

class CSpecialtyMgr {
public:
    static SpecialtyType GetPlayerSpecialty(HOBJECT hPlayer) {
        // Offset 0x0C in player object often holds specialty ID
        // Inferred from 1000738f: mov eax, [esi+0xc]
        uint32 nSpec = 0;
        g_pLTClient->GetModelAnimation(hPlayer, nSpec); // Placeholder for actual member access
        return (SpecialtyType)nSpec;
    }

    static bool IsMedic(HOBJECT hPlayer) {
        return GetPlayerSpecialty(hPlayer) == SPECIALTY_MEDIC;
    }

    static SpecialtyAttributes GetAttributes(SpecialtyType spec) {
        SpecialtyAttributes attrs;
        // Default values
        attrs.moveSpeedMultiplier = 1.0f;
        attrs.recoilMultiplier = 1.0f;
        attrs.reloadSpeedMultiplier = 1.0f;
        attrs.canUseMedikit = false;
        attrs.canUseLSD = false;
        attrs.canUseThermal = false;
        attrs.maxArmor = 100;

        switch (spec) {
            case SPECIALTY_COMMANDO:
                attrs.moveSpeedMultiplier = 1.1f;
                attrs.maxArmor = 150;
                break;
            case SPECIALTY_RECON:
                attrs.moveSpeedMultiplier = 1.2f;
                attrs.canUseLSD = true;
                break;
            case SPECIALTY_SNIPER:
                attrs.recoilMultiplier = 0.5f;
                break;
            case SPECIALTY_DEMOMAN:
                attrs.maxArmor = 200;
                break;
            case SPECIALTY_MEDIC:
                attrs.canUseMedikit = true;
                attrs.reloadSpeedMultiplier = 1.2f;
                break;
            case SPECIALTY_HEAVYGUNNER:
                attrs.moveSpeedMultiplier = 0.8f;
                attrs.maxArmor = 250;
                break;
        }
        return attrs;
    }
};
