#ifndef SERVERLIST_H
#define SERVERLIST_H

#include "ltbasedefs.h"
#include <stdio.h>

class ServerList {
public:
    ServerList();
    virtual ~ServerList();

    void Update();             // 0x10062310
    void SaveFavourites();     // 0x100632c0
    void LoadFavourites();     // 0x10063380

protected:
    uint32 m_pad[1220];        // 0x000 to 0x1310 
    uint32 m_nUnknown1314;     // 0x1314
    void*  m_pGamespyServer;   // 0x1318 (Gamespy interface pointer?)
    void*  m_pFavoritesList;   // 0x131c
    uint32 m_pad2[2];          // 0x1320
    void*  m_pServerArray;     // 0x1328
    uint32 m_nNumServers;      // 0x132c
    uint32 m_nUnknown1334;     // 0x1334
    void*  m_pUnknown1338;     // 0x1338
    // ...
    void*  m_pFavoritesManager;// 0x1414
};

#endif // SERVERLIST_H
