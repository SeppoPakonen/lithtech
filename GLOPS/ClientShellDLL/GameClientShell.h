#ifndef GAMECLIENTSHELL_H
#define GAMECLIENTSHELL_H

#include "IClientShell.h"

class GameClientShell : public IClientShell {
public:
    GameClientShell();
    virtual ~GameClientShell();

    virtual void OnMessage(uint8 messageID, void* hMessage); // 0x100316e0
    virtual void PostUpdate();                               // 0x10043790

    void HandleCoreMessage(HMESSAGEREAD hMessage);           // 0x10031a5e
    
    // Config accessors
    int GetIntVariable(const char* name, int def);
    float GetFloatVariable(const char* name, float def);
    void GetStringVariable(const char* name, char* dest, int maxLen, const char* def);

protected:
    uint32 m_pad[1024]; // Abstract padding, actual size of GameClientShell is huge
};

extern GameClientShell* g_pGameClientShell;

#endif // GAMECLIENTSHELL_H
