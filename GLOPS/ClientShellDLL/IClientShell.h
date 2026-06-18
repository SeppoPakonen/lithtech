#ifndef ICLIENTSHELL_H
#define ICLIENTSHELL_H

#include "ltbasedefs.h"

// Reconstructed GameClientShell structure based on initialization and vtable
class GameClientShell /* : public IClientShell */ {
public:
    GameClientShell();
    virtual ~GameClientShell(); // VTable[0] -> 1002ecd0

    // Virtual Methods mapped from typical LithTech IClientShell
    // Addresses assigned from observed vtable at 100b8a40
    
    // virtual void OnDeclareDefines() = 0;
    // virtual void OnInit() = 0;
    // virtual void OnTerm() = 0;
    // virtual void OnEvent(uint32 dwEventID, uint32 dwParam) = 0;
    virtual void OnMessage(uint8 messageID, void* hMessage); // 0x100316e0
    
    // Identified handlers
    void HandleCoreMessage(void* hMessage); // 0x10031a5e (MID 139)
    // virtual void OnCommandOn(int command) = 0;
    // virtual void OnCommandOff(int command) = 0;
    // virtual void OnKeyDown(int key, int rep) = 0;
    // virtual void OnKeyUp(int key) = 0;
    // virtual void PreUpdate() = 0;
    // virtual void PostUpdate() = 0;
    // virtual void Update() = 0;
    // virtual void OnEnterWorld() = 0;
    // virtual void OnExitWorld() = 0;

private:
    // Discovered via GameClientShell constructor (1002e990)
    // Object size is 0x18554 bytes.
    // Contains various embedded classes, managers, and arrays.
    
    uint32 m_pad0[0x30/4]; 
    // Embedded objects at 0x30, 0x4b4, etc.
};

// Structure returned by GetClientShellFunctions
typedef IClientShell* (*CreateClientShellFn)(ILTClient* pClientDE);
typedef void (*DeleteClientShellFn)(IClientShell* pClientShell);

struct ClientShellFunctions {
    CreateClientShellFn CreateClientShell;
    DeleteClientShellFn DeleteClientShell;
};

#endif // ICLIENTSHELL_H
// Update from Phase 4b: Mapped GameClientShell VTable Hooks
// 0x100b8a40 (VTable Start)
// [0]: 1002ecd0 -> Destructor
// [1]: 1002ec80 -> OnDeclareDefines (Placeholder/Empty)
// [2]: 1002f230 -> OnInit
// [3]: 1002ee90 -> OnTerm
// [4]: 10031a5e -> OnMessage
// [5]: 1002f5a0 -> OnEvent
// [10]: 100436f0 -> Update (Main Loop)
// [11]: 100437a0 -> PostUpdate (Rendering/UI)
