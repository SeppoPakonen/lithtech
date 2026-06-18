#ifndef MESSAGES_H
#define MESSAGES_H

#include "ltbasedefs.h"

// Network Message IDs (MID_*) for Global Operations
enum MessageID {
    // Wrapped in MID_CORE (139)
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

    // Primary Dispatcher IDs (GameClientShell::OnMessage)
    MID_SHOOT_EVENT         = 31, // GameClientShoot::OnMessage
    MID_CORE_MESSAGES       = 139, // Contains IDs 0-11
    MID_CONNECT_1           = 152,
    MID_DISCONNECT          = 153,
    MID_CONNECT_2           = 154,
    // Add more as identified
};

/*
    Reconstructed GameClientShell::OnMessage Dispatcher logic (0x100316e0)
    
    void GameClientShell::OnMessage(uint8 messageID, HMESSAGEREAD hMessage) {
        // Translation table (0x10035e00) maps messageID to an index
        // Jump table (0x10035c88) executes the handler.
        
        // Example: MID_CORE_MESSAGES (139) is mapped to HandleCoreMessage (0x10031a5e)
        // HandleCoreMessage then reads another 8 bits for the true core MID (0-11)
    }
*/

#endif // MESSAGES_H
