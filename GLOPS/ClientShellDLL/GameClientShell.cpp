#include "GameClientShell.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// 0x10031a5e: GameClientShell::HandleCoreMessage
// Handles MIDs 0-11 which are wrapped inside MID 139
void GameClientShell::HandleCoreMessage(HMESSAGEREAD hMessage) {
    uint8 coreMid = g_pLTClient->ReadBits(hMessage, 8);
    
    if (coreMid < 12) {
        // Dispatch to core message handlers using table at 0x1010d474
        // Logic maps to GameClientShell specific internal updates
        // e.g. MID_PLAYER_UPDATE, MID_TEAM_INFO, etc.
    } else {
        g_pLTClient->CPrint("GameClientShell::OnMessage: Invalid core message ID");
    }
}

// 0x100316e0: GameClientShell::OnMessage
// Primary network dispatcher.
void GameClientShell::OnMessage(uint8 messageID, void* hMessage) {
    // Note: The assembly reads messageID from stack (esp+4)
    // and uses the translation table at 0x10035e00
    
    if (messageID > 253) return; // Discard 254 and 255
    
    // Translation table lookup (0x10035e00)
    // uint8 index = g_pTranslationTable[messageID];
    
    // Switch based on translated index (jump table at 0x10035c88)
    switch(messageID) {
        case 0: // 0x100331c5
            break;
        case 1: // 0x1003328d (MID_PLAYER_UPDATE)
            break;
        case 7: // 0x1003377a (MID_GAME_STATUS)
            break;
        case 8: // 0x10033b1f (MID_COMMANDEER_SECURITYCAM)
            break;
        case 9: // 0x10033c2f (MID_DEPLOYLSD)
            break;
        case 12: // 0x1003413a (MID_ClientFX)
            break;
        case 31: // 0x10033613 (GameClientShoot::OnMessage)
            break;
        case 139: // 0x10031a5e (HandleCoreMessage)
            HandleCoreMessage(hMessage);
            break;
        case 152: // 0x10032a2d
        case 154:
            // Connect / Login
            break;
        case 153: // 0x10032cc9
            // Disconnect
            break;
        default: // Index 93 (0x10035c7b) - Default/Ignore
            break;
    }
}
