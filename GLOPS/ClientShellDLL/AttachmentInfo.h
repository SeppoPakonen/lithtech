#ifndef ATTACHMENTINFO_H
#define ATTACHMENTINFO_H

#include "ltbasedefs.h"

// Struct size is 0x88 (136 bytes) based on loop increment in AttachmentInfo::Init
struct AttachmentDef {
    uint16 resourceId; // +0x0 (implied, used to load string)
    char szName[64];   // +0x2 (UTIL_LoadString writes here)
    uint8 bHasIcon;    // +0x46 (flag checking if icon should be loaded)
    // ... other properties
    HLOCALOBJ hIcon;   // +0x??
};

class AttachmentInfo {
public:
    // 0x10006000
    static void Init();

private:
    static AttachmentDef* s_pAttachments; // 0x100df8c8
    static uint32 s_nNumAttachments;
};

#endif // ATTACHMENTINFO_H
