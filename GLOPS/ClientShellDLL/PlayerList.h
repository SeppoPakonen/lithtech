#ifndef PLAYERLIST_H
#define PLAYERLIST_H

#include "ltbasedefs.h"

class PlayerList {
public:
    PlayerList();
    virtual ~PlayerList();

    void AddPlayer(); // 0x100654f0 (signature likely includes player info struct)

protected:
    uint32 m_pad[60];        // 0x00 to 0xf0
    void*  m_pServer;        // 0xf0 (Server pointer containing rules/players)
    uint32 m_pad2;           // 0xf4
    void*  m_pPlayerListCtrl;// 0xf8 (GUI list control)
    
    // UI Columns
    void* m_pColNumPlayers;  // 0xfc
    void* m_pColHostname;    // 0x100
    void* m_pColGameVer;     // 0x104
    void* m_pColMapName;     // 0x108
    void* m_pColAdmin;       // 0x10c
    void* m_pColEmail;       // 0x110
    void* m_pColTimeLeft;    // 0x114
    void* m_pColMaxPlayers;  // 0x118
    void* m_pColPlayerName;  // 0x11c
};

#endif // PLAYERLIST_H
