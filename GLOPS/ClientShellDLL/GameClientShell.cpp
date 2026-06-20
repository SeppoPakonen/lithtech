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
    uint8 coreMid = g_pLTClient->Readuint8(hMessage);
    int8 arg1 = (int8)g_pLTClient->Readuint8(hMessage);
    
    if (coreMid < 12) {
        uint32* pCoreMsgData = (uint32*)0x1010d474;
        uint32 expected = pCoreMsgData[coreMid * 9];
        
        if (expected == arg1) {
            g_pLTClient->CPrint("GameClientShell::HandleCoreMessage: Message already processed!");
        } else {
            int currentVal = 0;
            if (this->m_pPlayerMgr) {
                currentVal = this->m_pPlayerMgr->GetCoreMessageVal();
            }
            if (currentVal == arg1) {
                HSTRING hStr = g_pLTClient->FormatString(1181);
                this->PrintMessage(g_pLTClient->GetStringData(hStr), 0xff00ff00);
                g_pLTClient->FreeString(hStr);
            } else {
                HSTRING hStr = g_pLTClient->FormatString(1206);
                this->PrintMessage(g_pLTClient->GetStringData(hStr), 0xffff0000);
                g_pLTClient->FreeString(hStr);
            }
            pCoreMsgData[coreMid * 9] = arg1;
        }
    } else {
        g_pLTClient->CPrint("GameClientShell::OnMessage: Invalid core message ID");
    }
}

// 0x100316e0: GameClientShell::OnMessage
void GameClientShell::OnMessage(uint8 messageID, void* hMessage) {
    if (this->m_Unknown181cc) {
        SomeGlobalFunction_1007b2a0(this, hMessage);
    }
    
    if (this->m_pPlayerMgr) {
        this->m_pPlayerMgr->OnMessage(hMessage);
    }

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
int GameClientShell::PostUpdate(int arg1, int arg2) {
    if (arg1 != 0) {
        return 1;
    }
    
    struct DummyStruct {
        int data[17];
    } info;
    memset(&info, 0, sizeof(info));
    info.data[0] = 0x44;
    
    this->UnknownFunc_1006e980();
    
    char buffer[256];
    const char* src = (const char*)0x100d9eec;
    strcpy(buffer, src);
    
    int var5c = 0;
    int var8 = 0;
    
    typedef void (*ImportedFuncType)(int, int*, int, int, int, int, int, int, char*, int*);
    ImportedFuncType ImportedFunc = (ImportedFuncType)0x100b802c;
    ImportedFunc(0x100d9edc, &var5c, 0, 0, 0, 0, 0, 0, buffer, &var8);
    
    if (g_pLTClient) {
        g_pLTClient->FlipScreen(0);
    }
    
    return 1;
}
