#include "ltbasedefs.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

class PlayerDamage {
public:
    void ApplyDamage(float amount, uint32 hitLocation, uint32 damageType);
};

// 0x10023000 (example)
void PlayerDamage::ApplyDamage(float amount, uint32 hitLocation, uint32 damageType) {
    float multiplier = 1.0f;
    if (hitLocation == 1) { // Head
        multiplier = 2.0f;
    } else if (hitLocation == 2) { // Torso
        multiplier = 1.0f;
    } else { // Limbs
        multiplier = 0.5f;
    }
    
    float finalDamage = amount * multiplier;
    
    HMESSAGEWRITE hMessage = g_pLTClient->StartMessage(139); // Assuming MID_CORE_MESSAGES
    g_pLTClient->WriteToMessageByte(hMessage, 4); // Example damage event sub-ID
    g_pLTClient->WriteToMessageFloat(hMessage, finalDamage);
    g_pLTClient->WriteToMessageByte(hMessage, hitLocation);
    g_pLTClient->WriteToMessageByte(hMessage, damageType);
    g_pLTClient->EndMessage(hMessage);
    
    g_pLTClient->SendToServer(hMessage, 1); // 1 = MESSAGE_GUARANTEED
}
