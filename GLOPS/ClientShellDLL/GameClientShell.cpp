#include "GameClientShell.h"
#include "ILTClient.h"
#include <string.h>
#include <stdio.h>

extern ILTClient* g_pLTClient;
GameClientShell* g_pGameClientShell = nullptr;

GameClientShell::GameClientShell() {
}

GameClientShell::~GameClientShell() {
}

int GameClientShell::GetIntVariable(const char* name, int def) {
    if (!g_pLTClient) return def;
    HCONSOLEVAR hVar = g_pLTClient->GetConsoleVariable(name);
    if (!hVar) return def;
    return (int)g_pLTClient->GetVarValueFloat(hVar);
}

float GameClientShell::GetFloatVariable(const char* name, float def) {
    if (!g_pLTClient) return def;
    HCONSOLEVAR hVar = g_pLTClient->GetConsoleVariable(name);
    if (!hVar) return def;
    return g_pLTClient->GetVarValueFloat(hVar);
}

void GameClientShell::GetStringVariable(const char* name, char* dest, int maxLen, const char* def) {
    if (!g_pLTClient) {
        strncpy(dest, def, maxLen);
        return;
    }
    HCONSOLEVAR hVar = g_pLTClient->GetConsoleVariable(name);
    if (!hVar) {
        strncpy(dest, def, maxLen);
        return;
    }
    const char* val = g_pLTClient->GetVarValueString(hVar);
    if (val) {
        strncpy(dest, val, maxLen);
    } else {
        strncpy(dest, def, maxLen);
    }
}

// 0x10031a5e: GameClientShell::HandleCoreMessage
void GameClientShell::HandleCoreMessage(HMESSAGEREAD hMessage) {
    uint8 coreMid = g_pLTClient->ReadBits(hMessage, 8);
    
    if (coreMid < 12) {
        // Dispatch to core message handlers using table at 0x1010d474
    } else {
        g_pLTClient->CPrint("GameClientShell::OnMessage: Invalid core message ID");
    }
}

// 0x100316e0: GameClientShell::OnMessage
void GameClientShell::OnMessage(uint8 messageID, void* hMessage) {
    if (messageID > 253) return; // Discard 254 and 255
    
    // Switch based on translated index (jump table at 0x10035c88)
    switch(messageID) {
        case 1: // MID_PLAYER_UPDATE
            break;
        case 7: // MID_GAME_STATUS
            break;
        case 8: // MID_COMMANDEER_SECURITYCAM
            break;
        case 9: // MID_DEPLOYLSD
            break;
        case 12: // MID_ClientFX
            break;
        case 31: // GameClientShoot::OnMessage
            break;
        case 139: // 0x10031a5e (HandleCoreMessage)
            HandleCoreMessage(hMessage);
            break;
        case 152:
        case 154:
            // Connect / Login
            break;
        case 153:
            // Disconnect
            break;
        default:
            break;
    }
}

// 0x10043790: GameClientShell::PostUpdate
void GameClientShell::PostUpdate() {
    // Abstracted: Render widgets, HUD, crosshair, etc.
}
