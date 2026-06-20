#include "AttachmentInfo.h"
#include <stdio.h>
#include <string.h>

extern void* g_pLTClient; // Replace with ILTClient if needed
extern void* g_pTexInterface; // Or appropriate interface
extern bool g_bLoadStrings; // ds:0x100c5d78

// Engine structures/types
typedef void* HSTRING;
typedef void* HTEXTURE;

// 10006100
AttachmentInfo::AttachmentInfo() {
    memset((uint8*)this + 4, 0, 288);
}

// 10006000
void AttachmentInfo::Init() {
    if (m_pAttachments) return;

    m_pAttachments = (AttachmentDef*)0x100df8c8;
    m_nNumAttachments = 38;

    for (uint32 i = 0; i < m_nNumAttachments; ++i) {
        AttachmentDef* pDef = (AttachmentDef*)((uint8*)m_pAttachments + i * 0x88);
        
        if (*(bool*)0x100c5d78) {
            // Function 0x100113d0 returns HSTRING from string name
            HSTRING (*LoadHString)(const char*) = (HSTRING (*)(const char*))0x100113d0;
            HSTRING hStr = LoadHString(pDef->szName);
            
            // FormatString / GetStringData (vtable index 51)
            const char* (*GetStringData)(void*, HSTRING) = *(const char* (**)(void*, HSTRING))(*(uint32*)0x1010cfc8 + 0xcc);
            const char* szStr = GetStringData(*(void**)0x1010cfc8, hStr);
            
            strncpy(pDef->szName, szStr, 59);
            pDef->szName[59] = '\0';
            
            // FreeString (vtable index 48)
            void (*FreeString)(void*, HSTRING) = *(void (**)(void*, HSTRING))(*(uint32*)0x1010cfc8 + 0xc0);
            FreeString(*(void**)0x1010cfc8, hStr);
        }
        
        // Load Texture
        void* pTexInterface = *(void**)0x1010cff0;
        int (*CreateTextureFromName)(void*, HTEXTURE*, const char*) = *(int (**)(void*, HTEXTURE*, const char*))(*(uint32*)pTexInterface + 0x8);
        
        int result = CreateTextureFromName(pTexInterface, (HTEXTURE*)&pDef->hIcon, pDef->szIcon);
        
        if (result != 0 && pDef->szIcon[0] != '\0') {
            // Error printing
            void* pClientDE = *(void**)0x1010cfc8;
            
            // Set error info (vtable 0x120)
            void (*SetErrorInfo)(void*, const char*, int) = *(void (**)(void*, const char*, int))(*(uint32*)pClientDE + 0x120);
            SetErrorInfo(pClientDE, "AttachmentInfo.cpp", 188);
            
            // Print error (vtable 0x128)
            void (*PrintErrorInfo)(void*, void*, const char*, const char*, const char*) = *(void (**)(void*, void*, const char*, const char*, const char*))(*(uint32*)pClientDE + 0x128);
            PrintErrorInfo(pClientDE, pClientDE, "AttachmentInfo::Init", "Couldn't load attachment icon texture \"%s\"", pDef->szIcon);
        }
    }
    
    *(bool*)0x100c5d78 = false;
}
