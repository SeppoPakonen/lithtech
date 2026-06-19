#include "GameSettings.h"
#include <string.h>

// Assuming ILTClient has GetConsoleVariable type functions, or we use abstract wrappers
class CGameClientShell {
public:
    int GetIntVariable(const char* name, int def);
    float GetFloatVariable(const char* name, float def);
    void GetStringVariable(const char* name, char* dest, int maxLen, const char* def);
};
extern CGameClientShell* g_pGameClientShell;

void GameSettings::Init(HCONSOLEVAR hProfileVar, ILTClient* pClient) {
    m_hProfileVar = hProfileVar;
    m_pClient = pClient;
    
    if (!g_pGameClientShell) return;

    m_nBadge = g_pGameClientShell->GetIntVariable("Badge", 0);
    m_nPlayerBadge = g_pGameClientShell->GetIntVariable("PlayerBadge", 0);
    m_nAllowDownloads = g_pGameClientShell->GetIntVariable("AllowDownloads", 0);
    m_nScreenWidth = g_pGameClientShell->GetIntVariable("ScreenWidth", 800);
    m_nScreenHeight = g_pGameClientShell->GetIntVariable("ScreenHeight", 600);
    m_nBitDepth = g_pGameClientShell->GetIntVariable("BitDepth", 32);
    m_nSpDifficulty = g_pGameClientShell->GetIntVariable("SpDifficulty", 1);
    m_nMouseLook = g_pGameClientShell->GetIntVariable("MouseLook", 1);
    m_nInvertMouse = g_pGameClientShell->GetIntVariable("InvertMouse", 0);
    m_nLookSpring = g_pGameClientShell->GetIntVariable("LookSpring", 0);
    m_nLookStrafe = g_pGameClientShell->GetIntVariable("LookStrafe", 0);
    m_fTurnRate = g_pGameClientShell->GetFloatVariable("TurnRate", 1.0f);
    m_fLookUpRate = g_pGameClientShell->GetFloatVariable("LookUpRate", 1.0f);
    m_nUseEAX = g_pGameClientShell->GetIntVariable("UseEAX", 0);
    m_nWeaponKick = g_pGameClientShell->GetIntVariable("WeaponKick", 1);
    m_nMuzzelFlashDLight = g_pGameClientShell->GetIntVariable("MuzzelFlashDLight", 1);
    m_nBloodSpray = g_pGameClientShell->GetIntVariable("BloodSpray", 1);
    m_nEjectShells = g_pGameClientShell->GetIntVariable("EjectShells", 1);
    m_nHitPlayerIndicator = g_pGameClientShell->GetIntVariable("HitPlayerIndicator", 1);
    m_nClientVoip = g_pGameClientShell->GetIntVariable("ClientVoip", 1);
    m_nAlwaysRun = g_pGameClientShell->GetIntVariable("AlwaysRun", 1);
    
    g_pGameClientShell->GetStringVariable("PlayerName", m_szName, sizeof(m_szName), "Player");
    
    // Abstracted parsing of hProfileVar if necessary
    if (m_hProfileVar) {
        // m_szProfileFileName mapping
        // g_pGameClientShell->GetStringVariable(hProfileVar, m_szProfileFileName, sizeof(m_szProfileFileName), "");
    }
}
