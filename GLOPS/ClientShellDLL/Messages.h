#ifndef MESSAGES_H
#define MESSAGES_H

#include "ltbasedefs.h"

// Network Message IDs (MID_*) for Global Operations
enum MessageID {
    MID_PLAYER_UPDATE       = 1,
    MID_PLAYER_STATUS       = 2,
    MID_WEAPON_FIRE         = 3,
    MID_WEAPON_RELOAD       = 4,
    MID_GEAR_EVENT          = 5,
    MID_TEAM_INFO           = 6,
    MID_GAME_STATUS         = 7,
    MID_COMMANDEER_SECURITYCAM = 8,
    MID_DEPLOYLSD           = 9,
    MID_BIND_SECURITYCAM    = 10,
    MID_Sfx                 = 11,
    MID_ClientFX            = 12,
    // Add more as identified
};

/*
    Reconstructed GameClientShell::OnMessage Dispatcher logic (Pseudocode)
    
    void GameClientShell::OnMessage(uint8 messageID, HMESSAGEREAD hMessage) {
        uint8 mid = g_pLTClient->ReadBits(hMessage, 8);
        
        // Example Range handling observed in 10031a5e
        if (mid >= 0 && mid < 12) {
             // Handle core messages (10031a9d)
             // These use an internal table at 0x1010d474
        } else {
             // Dispatch to sub-handlers like GameClientShoot::OnMessage
             // or specific ID branches.
        }
    }
*/

#endif // MESSAGES_H
