#include "ServerList.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

ServerList::ServerList() {
    // Constructor
}

ServerList::~ServerList() {
    // Destructor
}

// 0x10062310
void ServerList::Update() {
    // 10062310:	56                   	push   esi
    // 10062311:	57                   	push   edi
    // 10062312:	8b f1                	mov    esi,ecx
    // 10062314:	bf 01 00 00 00       	mov    edi,0x1
    // 10062319:	89 be 34 13 00 00    	mov    DWORD PTR [esi+0x1334],edi
    m_nUnknown1334 = 1;
    
    // 1006231f:	e8 2c 5b 00 00       	call   0x10067e50
    // GetGamespyServer();
    
    // 10062324:	8b 8e 18 13 00 00    	mov    ecx,DWORD PTR [esi+0x1318]
    // 1006232a:	8b 40 54             	mov    eax,DWORD PTR [eax+0x54]
    // 1006232d:	51                   	push   ecx
    // 1006232e:	89 86 38 13 00 00    	mov    DWORD PTR [esi+0x1338],eax
    // 10062334:	e8 37 0a 04 00       	call   0x100a2d70
    // int serverState = GetGamespyServerState(m_pGamespyServer);
    // m_nUnknown1338 = serverState;
    
    // 100623b2:	85 ff                	test   edi,edi
    // 100623b4:	74 4a                	je     0x10062400
    // 100623b6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
    // 100623bc:	53                   	push   ebx
    // 100623bd:	68 48 01 00 00       	push   0x148
    // 100623c2:	68 30 cb 0d 10       	push   0x100dcb30
    // 100623c7:	8b 11                	mov    edx,DWORD PTR [ecx]
    // 100623c9:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
    // ...
    // 100623f6:	ff 93 28 01 00 00    	call   DWORD PTR [ebx+0x128]
    
    if (m_pGamespyServer && m_pGamespyServer->State == ERROR) {
        g_pLTClient->CPrint("ServerList::Update: Gamespy error (%u): %s", m_pGamespyServer->State, "Error");
    }
    
    if (m_pServerArray && m_nNumServers > 0) {
        // ... Refresh servers loop ...
    }
}

// 0x100632c0
void ServerList::SaveFavourites() {
    const char* szFilename = "globalops/favorite_servers.txt";
    
    // Abstracted sorting or internal state prep call
    // 100632c4: call 0x1006ab20
    
    FILE* fp = fopen(szFilename, "wt");
    if (!fp) {
        g_pLTClient->CPrint("ServerList::SaveFavourites: Couldn't open favorites.txt for writing");
        return;
    }
    
    // Iterate over favorite servers and save them
    // Abstracted
    
    fclose(fp);
}

// 0x10063380
void ServerList::LoadFavourites() {
    const char* szFilename = "globalops/favorite_servers.txt";
    
    FILE* fp = fopen(szFilename, "rt");
    if (!fp) {
        g_pLTClient->CPrint("ServerList::LoadFavourites: Couldn't open favorites.txt for reading");
        return;
    }
    
    // Abstracted read loop (fgets etc)
    
    fclose(fp);
}
