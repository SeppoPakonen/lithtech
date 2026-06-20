#include "ServerList.h"
#include "ILTClient.h"
#include <stdio.h>
#include <vector>

extern ILTClient* g_pLTClient;

// Internal declarations based on ASM
extern void* GetGamespyServer();
extern void UpdateGamespyServer(void* pGamespyServer);
extern void UpdateFavoritesList(void* pList);
extern void CallUnknown74d60(ServerList* pList, int arg);
extern void CallUnknownA1630(void* pGamespyServer, int arg1, int arg2, int arg3);
extern void CallUnknownA1340(void* pGamespyServer);
extern int CallUnknown62980(ServerList* pList);
extern const char* GetGamespyErrorString(void* pGamespyServer, int errorCode);
extern void SortFavorites(ServerList* pList);

struct Favourite {
    char ip[16];
    int port;
};

ServerList::ServerList() {
    // Constructor
}

ServerList::~ServerList() {
    // Destructor
}

// 0x10062310
void ServerList::Update() {
    m_nUnknown1334 = 1;
    void* pGamespy = GetGamespyServer();
    m_pUnknown1338 = (void*)*((uint32_t*)((char*)pGamespy + 0x54)); // State
    
    UpdateGamespyServer(m_pGamespyServer);
    UpdateFavoritesList(&m_pFavoritesList);
    
    uint32_t unk = m_nUnknown1314;
    m_nUnknown1314 = 0xFFFFFFFF;
    if (unk != 0xFFFFFFFF) {
        void* pGamespy2 = GetGamespyServer();
        typedef void (__thiscall *FuncType)(void*);
        FuncType func = *(FuncType*)(*(uintptr_t*)pGamespy2 + 0x74);
        func(pGamespy2);
    }
    
    CallUnknown74d60(this, 0);
    
    int state = (int)m_pUnknown1338;
    if (state == 1) {
        CallUnknownA1630(m_pGamespyServer, 1, 0x7000, 0x700A);
    } else {
        CallUnknownA1340(m_pGamespyServer);
    }
    
    int retCode = CallUnknown62980(this);
    if (retCode != 0) {
        g_pLTClient->DebugOut("ServerList.cpp", 328);
        const char* errorStr = GetGamespyErrorString(m_pGamespyServer, retCode);
        g_pLTClient->CPrint("ServerList::Update: Gamespy error (%u): %s", retCode, errorStr);
    }
}

// 0x100632c0
void ServerList::SaveFavourites() {
    SortFavorites(this);
    
    FILE* fp = fopen("globalops/favorite_servers.txt", "wt");
    if (!fp) {
        g_pLTClient->DebugOut("ServerList.cpp", 787);
        g_pLTClient->CPrint("ServerList::SaveFavourites: Couldn't open favorites.txt for writing");
        return;
    }
    
    std::vector<Favourite>& favs = *(std::vector<Favourite>*)((char*)this + 0x1414);
    for (size_t i = 0; i < favs.size(); ++i) {
        fprintf(fp, "%s:%d\n", favs[i].ip, favs[i].port);
    }
    
    fclose(fp);
}

// 0x10063380
void ServerList::LoadFavourites() {
    std::vector<Favourite>& favs = *(std::vector<Favourite>*)((char*)this + 0x1414);
    favs.clear();
    
    FILE* fp = fopen("globalops/favorite_servers.txt", "rt");
    if (!fp) {
        g_pLTClient->DebugOut("ServerList.cpp", 742);
        g_pLTClient->CPrint("ServerList::LoadFavourites: Couldn't open favorites.txt for reading");
    } else {
        while (!feof(fp)) {
            int ip1 = 0, ip2 = 0, ip3 = 0, ip4 = 0, port = 0;
            if (fscanf(fp, "%d.%d.%d.%d:%d", &ip1, &ip2, &ip3, &ip4, &port) >= 5) {
                if (ip1 >= 0 && ip1 <= 255 && ip2 >= 0 && ip2 <= 255 &&
                    ip3 >= 0 && ip3 <= 255 && ip4 >= 0 && ip4 <= 255) {
                    
                    Favourite fav;
                    _snprintf(fav.ip, 15, "%d.%d.%d.%d", ip1, ip2, ip3, ip4);
                    fav.ip[15] = '\0';
                    fav.port = port;
                    favs.push_back(fav);
                }
            }
        }
        fclose(fp);
    }
    
    int numServers = 0;
    if (m_pServerArray) {
        numServers = (m_nNumServers - (uint32_t)m_pServerArray) / 220;
    }
    CallUnknown74d60(this, numServers);
}
