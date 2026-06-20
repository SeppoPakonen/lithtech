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
    if (m_nSelectedProfile >= m_nNumProfiles)
        return;

    char fileName[256];
    char fullPath[256];
    const char* profileName = m_pProfileList[m_nSelectedProfile];

    sprintf(fileName, "%s.cfg", profileName);
    sprintf(fullPath, "globalops\\profiles\\%s", fileName);
    remove(fullPath);

    sprintf(fileName, "%s.hud", profileName);
    sprintf(fullPath, "globalops\\profiles\\%s", fileName);
    remove(fullPath);

    RefreshList();
}

// 0x100559f0
void ProfileDialog::RefreshList() {
    void* pFileList = g_pLTClient->GetFileList("globalops\\profiles");
    
    // Assuming m_pProfileList is a vector or similar array container that can be cleared
    // and m_nNumProfiles tracks the count.
    m_nNumProfiles = 0;
    // Clear existing list (mocked as array reset for this reconstruction)
    
    if (pFileList) {
        // Iterate over file list
        // Struct assumed: { int type; char* name; void* next; }
        struct FileEntry { int type; char* name; FileEntry* next; };
        FileEntry* pEntry = (FileEntry*)pFileList;
        
        while (pEntry) {
            if (pEntry->type == 1) { // 1 = file
                char* ext = strrchr(pEntry->name, '.');
                if (ext && _stricmp(ext, ".cfg") == 0) {
                    // Extract filename, strip extension, and populate m_pProfileList
                    char profileName[256];
                    int len = ext - pEntry->name;
                    strncpy(profileName, pEntry->name, len);
                    profileName[len] = '\0';
                    
                    // Add to list (simulated)
                    // m_pProfileList[m_nNumProfiles] = strdup(profileName);
                    m_nNumProfiles++;
                }
            }
            pEntry = pEntry->next;
        }
        g_pLTClient->FreeFileList(pFileList);
    }
    
    m_nSelectedProfile = 0xFFFFFFFF; // 10055b36
    UpdateLayout();
}

// 0x10055b50
void ProfileDialog::UpdateLayout() {
    // Computes positioning for the profile list
    // m_pProfileListCtrl->RemoveAll();
    // for (int i = 0; i < m_nNumProfiles; ++i) {
    //     bool bSelected = (i == m_nSelectedProfile);
    //     // m_pProfileListCtrl->AddItem(m_pProfileList[i], bSelected);
    // }
}
