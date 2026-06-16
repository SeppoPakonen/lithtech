#ifndef PROTOCOL_H
#define PROTOCOL_H

// Network Message IDs extracted from cshell.dll strings and OnMessage logic
enum MessageID {
    MID_COMMANDEER_SECURITYCAM = 0, // Inferred from range checks
    MID_DEPLOYLSD = 0,              // Multiple IDs map to same handlers in early RE
    MID_BIND_SECURITYCAM = 0,       // Full enum to be refined in Phase 2
    
    // Observed in strings.txt
    // MID_PLAYER_UPDATE
    // MID_WEAPON_FIRE
    // MID_GEAR_EVENT
};

#endif // PROTOCOL_H
