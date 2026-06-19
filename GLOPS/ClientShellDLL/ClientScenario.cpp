#include "ClientScenario.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// Placeholder ButeMgr / config reader methods
class CButeMgr {
public:
    bool Exist(const char* szKey);
    char* GetString(const char* szKey);
    int GetInt(const char* szKey);
    float GetFloat(const char* szKey);
};
extern CButeMgr* g_pButeMgr;

// CreateTextureFromName is an engine or utility method to load the texture
extern void* CreateTextureFromName(const char* szName);

ClientScenario::ClientScenario() {
    // Basic initialization
}

ClientScenario::~ClientScenario() {
}

// 0x1001ef40
void ClientScenario::AddScenario() {
    if (!g_pButeMgr) return;
    
    if (g_pButeMgr->Exist("DescriptionPara1")) {
        m_szDescriptionPara1 = g_pButeMgr->GetString("DescriptionPara1");
    }
    
    if (g_pButeMgr->Exist("DescriptionPara2")) {
        m_szDescriptionPara2 = g_pButeMgr->GetString("DescriptionPara2");
    }
    
    if (g_pButeMgr->Exist("DescriptionPara3")) {
        m_szDescriptionPara3 = g_pButeMgr->GetString("DescriptionPara3");
    }
    
    if (g_pButeMgr->Exist("Location")) {
        m_szLocation = g_pButeMgr->GetString("Location");
    }
    
    if (g_pButeMgr->Exist("Month")) {
        m_szMonth = g_pButeMgr->GetString("Month");
    }
    
    if (g_pButeMgr->Exist("Year")) {
        m_nYear = g_pButeMgr->GetInt("Year");
    }
    
    if (g_pButeMgr->Exist("Hour")) {
        m_nHour = g_pButeMgr->GetInt("Hour");
    }
    
    if (g_pButeMgr->Exist("Minutes")) {
        m_nMinutes = g_pButeMgr->GetInt("Minutes");
    }
    
    if (g_pButeMgr->Exist("Seconds")) {
        m_nSeconds = g_pButeMgr->GetInt("Seconds");
    }
    
    if (g_pButeMgr->Exist("SatImage")) {
        const char* szSatImage = g_pButeMgr->GetString("SatImage");
        m_hSatImageTexture = CreateTextureFromName(szSatImage);
        
        if (!m_hSatImageTexture) {
            g_pLTClient->CPrint("ClientScenario::AddScenario: Couldn't load satellite image texture \"%s\"", szSatImage);
        }
    }
    
    if (g_pButeMgr->Exist("Longitude")) {
        m_fLongitude = g_pButeMgr->GetFloat("Longitude");
    }
    
    if (g_pButeMgr->Exist("Latitude")) {
        m_fLatitude = g_pButeMgr->GetFloat("Latitude");
    }
}
