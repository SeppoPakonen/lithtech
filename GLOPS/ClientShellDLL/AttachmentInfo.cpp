#include "AttachmentInfo.h"
#include "ILTClient.h"
#include <stdio.h>

extern ILTClient* g_pLTClient;

// Utility for formatting engine text
extern void UTIL_LoadString(uint32 resourceId, char* szDest, int maxLen);

// Simulated engine function mapping
extern void* CreateTextureFromName(const char* szName);

AttachmentDef* AttachmentInfo::s_pAttachments = (AttachmentDef*)0x100df8c8;
uint32 AttachmentInfo::s_nNumAttachments = 38;

// 0x10006000
void AttachmentInfo::Init() {
    if (!s_pAttachments) return;

    for (uint32 i = 0; i < s_nNumAttachments; ++i) {
        AttachmentDef* pDef = &s_pAttachments[i];
        
        // Ensure string is populated correctly from resources
        if (pDef->resourceId > 0) {
            UTIL_LoadString(pDef->resourceId, pDef->szName, sizeof(pDef->szName));
        }
        
        if (pDef->bHasIcon) {
            char szIconPath[128];
            sprintf(szIconPath, "interface/weapons/attachments/%s.dtx", pDef->szName);
            
            pDef->hIcon = CreateTextureFromName(szIconPath);
            
            if (!pDef->hIcon) {
                g_pLTClient->CPrint("AttachmentInfo::Init: Couldn't load attachment icon texture \"%s\"", pDef->szName);
            }
        }
    }
}
