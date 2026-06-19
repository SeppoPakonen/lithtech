#ifndef ATTACHMENTINFO_H
#define ATTACHMENTINFO_H

#include "ltbasedefs.h"

struct AttachmentDef {
    uint32 resourceId;      // String ID for localized name
    char szName[64];        // Internal/file name
    bool bHasIcon;          // Whether it has an associated icon
    void* hIcon;            // Texture handle
    uint32 pad[8];          // Unused/unknown space
};

class AttachmentInfo {
public:
    static void Init(); // 0x10006000

    static AttachmentDef* s_pAttachments;
    static uint32 s_nNumAttachments;
};

#endif // ATTACHMENTINFO_H
