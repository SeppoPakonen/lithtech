#include "AttachmentInfo.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

AttachmentDef* AttachmentInfo::s_pAttachments = (AttachmentDef*)0x100df8c8;
uint32 AttachmentInfo::s_nNumAttachments = 38; // 0x26

// 0x10006000: AttachmentInfo::Init
void AttachmentInfo::Init() {
    if (!s_pAttachments) return;

    for (uint32 i = 0; i < s_nNumAttachments; ++i) {
        AttachmentDef* pDef = &s_pAttachments[i];
        
        // Load localized name
        // 0x100113d0: UTIL_LoadString
        // UTIL_LoadString(pDef->resourceId, pDef->szName, sizeof(pDef->szName));
        
        // Formatting attachment icon string
        char szIconPath[128];
        // sprintf(szIconPath, "interface/weapons/attachments/%s.dtx", pDef->szName);
        
        if (pDef->bHasIcon) {
            // Load texture
            // pDef->hIcon = g_pLTClient->CreateTexture(szIconPath);
            if (!pDef->hIcon) {
                g_pLTClient->CPrint("AttachmentInfo::Init: Couldn't load attachment icon texture \"%s\"", pDef->szName);
            }
        }
    }
}
