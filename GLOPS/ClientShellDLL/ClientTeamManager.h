#ifndef CLIENTTEAMMANAGER_H
#define CLIENTTEAMMANAGER_H

#include "ltbasedefs.h"

struct ClientTeam {
    uint32 m_nTeamID;        // 0x00
    uint32 m_nAffiliation;   // 0x04
    uint32 m_pad08;          // 0x08
    uint32 m_pad0C;          // 0x0C
    char* m_szName;          // 0x10
    char* m_szAffiliationName;// 0x14
    char* m_szBriefing;      // 0x18
    char* m_szDescription;   // 0x1C
    char* m_szHelpText;      // 0x20
    char* m_szCaption1;      // 0x24
    char* m_szCaption2;      // 0x28
    void* m_hDiagram1;       // 0x2C
    void* m_hDiagram2;       // 0x30
    void* m_hFlag;           // 0x34
    uint32 m_nMaxPlayers;    // 0x38
    uint32 m_bVIPTeam;       // 0x3C
    uint8 m_pad40;           // 0x40
    uint8 m_pad41;           // 0x41
};

class ClientTeamManager {
public:
    ClientTeamManager();
    virtual ~ClientTeamManager();

    ClientTeam* AddTeam(void* pButeMgr, const char* szTeamTag); // 0x1001f2c0
};

#endif // CLIENTTEAMMANAGER_H
