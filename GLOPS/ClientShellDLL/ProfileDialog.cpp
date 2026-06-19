#include "ProfileDialog.h"
#include "ILTClient.h"
#include <stdio.h>
#include <string.h>

extern ILTClient* g_pLTClient;

ProfileDialog::ProfileDialog() {
    m_nNumProfiles = 0;
    m_nSelectedProfile = 0xFFFFFFFF;
    m_pProfileList = nullptr;
}

ProfileDialog::~ProfileDialog() {
}

// 0x10055959
void ProfileDialog::ConfirmDeleteProfile() {
    // In actual implementation, the profile name would be fetched from a UI element.
    // For now we simulate the buffer logic
    const char* profileName = "profile"; 
    char fileName[256];
    char fullPath[256];

    // Attempt to delete the .cfg file
    sprintf(fileName, "%s.cfg", profileName);
    sprintf(fullPath, "globalops/%s", fileName);
    
    if (remove(fullPath) != 0) {
        g_pLTClient->CPrint("ProfileDialog::ConfirmDeleteProfile: Couldn't delete file \"%s\"", fullPath);
    }

    // Attempt to delete the .hud file
    sprintf(fileName, "%s.hud", profileName);
    sprintf(fullPath, "globalops/%s", fileName);
    
    if (remove(fullPath) != 0) {
        g_pLTClient->CPrint("ProfileDialog::ConfirmDeleteProfile: Couldn't delete file \"%s\"", fullPath);
    }

    // After deleting, refresh the list
    RefreshList();
}

// 0x100559f0
void ProfileDialog::RefreshList() {
    // Call GetFileList from the engine (simulated via 0x80 vtable offset on LTClient)
    // 10055a0f: call [eax+0x80] with "globalops\\profiles"
    void* pFileList = nullptr; // g_pLTClient->GetFileList("globalops\\profiles");
    
    m_nSelectedProfile = 0xFFFFFFFF; // 10055b36
    m_nNumProfiles = 0;
    
    if (pFileList) {
        // Iterate over file list
        // 10055a4d: cmp dword ptr [esi], 1 (check if it's a file)
        // ...
        // Extract filename, strip extension, and populate m_pProfileList
    }
}

// 0x10055b50
void ProfileDialog::UpdateLayout() {
    // Computes positioning for the profile list
    if (m_nNumProfiles > 0) {
        // Layout calculations...
    }
}
