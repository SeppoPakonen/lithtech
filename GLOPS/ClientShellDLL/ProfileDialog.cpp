#include "ProfileDialog.h"
#include "ILTClient.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern ILTClient* g_pLTClient;

struct FileEntry {
    int m_Type;
    char* m_pBaseFilename;
    FileEntry* m_pNext;
};

ProfileDialog::ProfileDialog() {
    m_nNumProfiles = 0;
    m_nSelectedProfile = 0xFFFFFFFF;
    m_pProfileList = nullptr;
}

ProfileDialog::~ProfileDialog() {
    if (m_pProfileList) {
        char** pList = (char**)m_pProfileList;
        for (unsigned int i = 0; i < m_nNumProfiles; ++i) {
            free(pList[i]);
        }
        free(pList);
    }
}

// 0x10055959
void ProfileDialog::ConfirmDeleteProfile() {
    if (m_nSelectedProfile >= m_nNumProfiles)
        return;

    char fileName[256];
    char fullPath[256];
    char** pList = (char**)m_pProfileList;
    const char* profileName = pList[m_nSelectedProfile];

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
    
    if (m_pProfileList) {
        char** pList = (char**)m_pProfileList;
        for (unsigned int i = 0; i < m_nNumProfiles; ++i) {
            free(pList[i]);
        }
        free(pList);
        m_pProfileList = nullptr;
    }
    m_nNumProfiles = 0;
    
    if (pFileList) {
        FileEntry* pEntry = (FileEntry*)pFileList;
        
        while (pEntry) {
            if (pEntry->m_Type == 1) { // 1 = file
                char* ext = strrchr(pEntry->m_pBaseFilename, '.');
                if (ext && _stricmp(ext, ".cfg") == 0) {
                    m_nNumProfiles++;
                }
            }
            pEntry = pEntry->m_pNext;
        }
        
        if (m_nNumProfiles > 0) {
            char** pNewList = (char**)malloc(m_nNumProfiles * sizeof(char*));
            pEntry = (FileEntry*)pFileList;
            int currentIndex = 0;
            while (pEntry) {
                if (pEntry->m_Type == 1) {
                    char* ext = strrchr(pEntry->m_pBaseFilename, '.');
                    if (ext && _stricmp(ext, ".cfg") == 0) {
                        char profileName[256];
                        int len = ext - pEntry->m_pBaseFilename;
                        strncpy(profileName, pEntry->m_pBaseFilename, len);
                        profileName[len] = '\0';
                        
                        pNewList[currentIndex] = strdup(profileName);
                        currentIndex++;
                    }
                }
                pEntry = pEntry->m_pNext;
            }
            m_pProfileList = pNewList;
        }
        g_pLTClient->FreeFileList(pFileList);
    }
    
    m_nSelectedProfile = 0xFFFFFFFF; // 10055b36
    UpdateLayout();
}

// 0x10055b50
void ProfileDialog::UpdateLayout() {
    // Computes positioning for the profile list
    char** pList = (char**)m_pProfileList;
    if (m_pProfileListCtrl) {
        m_pProfileListCtrl->RemoveAll();
        for (unsigned int i = 0; i < m_nNumProfiles; ++i) {
            bool bSelected = (i == m_nSelectedProfile);
            m_pProfileListCtrl->AddItem(pList[i], bSelected);
        }
    }
}
