#include "GameSettings.h"
#include <stdio.h>
#include <string.h>

// Note: Assuming ILTClient defines standard LithTech console functions
// GetConsoleVar, GetVarValueFloat, GetVarValueString, RunConsoleString, ParseConfigFile, CPrint

void GameSettings::Init(HCONSOLEVAR hProfileVar, ILTClient* pClient) {
    m_hProfileVar = hProfileVar;
    m_pClient = pClient;
    
    if (!m_pClient) return;

    HCONSOLEVAR hProfileNameVar = m_pClient->GetConsoleVar("ProfileName");
    const char* pszProfileName = "";
    if (hProfileNameVar) {
        pszProfileName = m_pClient->GetVarValueString(hProfileNameVar);
    }

    char szConsoleStr[256];
    sprintf(szConsoleStr, "+profilename %s", pszProfileName);
    m_pClient->RunConsoleString(szConsoleStr);

    sprintf(m_szProfileFileName, "globalops/profile/%s.cfg", pszProfileName);

    if (m_pClient->ParseConfigFile(m_szProfileFileName) != 1) {
        m_pClient->ParseConfigFile("globalops/defaultactions.cfg");
        if (m_pClient->ParseConfigFile("globalops/default.cfg") != 1) {
            m_pClient->CPrint("Couldn't load default.cfg");
        }
        if (m_pClient->ParseConfigFile("globalops/defaultcontrols.cfg") != 1) {
            m_pClient->CPrint("Couldn't load defaultcontrols.cfg");
        }
        
        sprintf(szConsoleStr, "GameSettings::Init: Profile variable \"%s\" does not exist. Creating the variable", pszProfileName);
        m_pClient->RunConsoleString(szConsoleStr);
        // Fallback initialization loops omitted for brevity
    }

    HCONSOLEVAR hVar;

    hVar = m_pClient->GetConsoleVar("ScreenWidth");
    if (hVar) m_nScreenWidth = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("ScreenHeight");
    if (hVar) m_nScreenHeight = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("BitDepth");
    if (hVar) m_nBitDepth = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("InvertMouse");
    if (hVar) m_nInvertMouse = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("AlwaysRun");
    if (hVar) m_nAlwaysRun = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("MouseLook");
    if (hVar) m_nMouseLook = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("LookSpring");
    if (hVar) m_nLookSpring = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("LookStrafe");
    if (hVar) m_nLookStrafe = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("turnrate");
    if (hVar) m_fTurnRate = m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("lookuprate");
    if (hVar) m_fLookUpRate = m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("UseEAX");
    if (hVar) m_nUseEAX = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("name");
    if (hVar) {
        const char* szName = m_pClient->GetVarValueString(hVar);
        strncpy(m_szName, szName, sizeof(m_szName) - 1);
        m_szName[sizeof(m_szName) - 1] = '\0';
    }

    hVar = m_pClient->GetConsoleVar("weaponkick");
    if (hVar) {
        m_nWeaponKick = (int)m_pClient->GetVarValueFloat(hVar);
    } else {
        sprintf(szConsoleStr, "+WeaponKick %d", m_nWeaponKick);
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("sp_completed");
    if (!hVar) {
        m_pClient->RunConsoleString("+sp_completed -1");
    }

    hVar = m_pClient->GetConsoleVar("spdifficulty");
    if (!hVar) {
        m_pClient->RunConsoleString("+spdifficulty 1");
        m_nSpDifficulty = 1;
    } else {
        m_nSpDifficulty = (int)m_pClient->GetVarValueFloat(hVar);
        if (m_nSpDifficulty < 0) m_nSpDifficulty = 0;
        if (m_nSpDifficulty > 2) m_nSpDifficulty = 2;
        sprintf(szConsoleStr, "spdifficulty %d", m_nSpDifficulty);
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("playerBadge");
    if (hVar) {
        m_nPlayerBadge = (int)m_pClient->GetVarValueFloat(hVar);
        sprintf(szConsoleStr, "playerBadge %d", m_nPlayerBadge);
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("Badge");
    if (hVar) {
        m_nBadge = (int)m_pClient->GetVarValueFloat(hVar);
        sprintf(szConsoleStr, "Badge %d", m_nBadge);
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("AllowDownloads");
    if (hVar) {
        m_nAllowDownloads = (int)m_pClient->GetVarValueFloat(hVar);
        sprintf(szConsoleStr, "allowdownloads %d", m_nAllowDownloads);
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("hitplayerindicator");
    if (hVar) m_nHitPlayerIndicator = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("bloodspray");
    if (hVar) m_nBloodSpray = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("ejectshells");
    if (hVar) m_nEjectShells = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("clientvoip");
    if (hVar) m_nClientVoip = (int)m_pClient->GetVarValueFloat(hVar);

    hVar = m_pClient->GetConsoleVar("MuzzelFlashDLight");
    if (hVar) m_nMuzzelFlashDLight = (int)m_pClient->GetVarValueFloat(hVar);

    // Audio volumes are set via global helper (1003ded0) - omitted explicit struct assignment as they don't map to GameSettings members.
    hVar = m_pClient->GetConsoleVar("musicvolume");
    if (hVar) {
        sprintf(szConsoleStr, "musicvolume %d", (int)m_pClient->GetVarValueFloat(hVar));
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("soundvolume");
    if (hVar) {
        sprintf(szConsoleStr, "soundvolume %d", (int)m_pClient->GetVarValueFloat(hVar));
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("2dvolume");
    if (hVar) {
        sprintf(szConsoleStr, "2dvolume %d", (int)m_pClient->GetVarValueFloat(hVar));
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("3dvolume");
    if (hVar) {
        sprintf(szConsoleStr, "3dvolume %d", (int)m_pClient->GetVarValueFloat(hVar));
        m_pClient->RunConsoleString(szConsoleStr);
    }

    hVar = m_pClient->GetConsoleVar("voicevolume");
    if (hVar) {
        sprintf(szConsoleStr, "voicevolume %d", (int)m_pClient->GetVarValueFloat(hVar));
        m_pClient->RunConsoleString(szConsoleStr);
    }
}
