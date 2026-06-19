#ifndef PROFILEDIALOG_H
#define PROFILEDIALOG_H

#include "ltbasedefs.h"

class ProfileDialog {
public:
    ProfileDialog();
    virtual ~ProfileDialog();

    void ConfirmDeleteProfile();
    void RefreshList();
    
    // Identified from assembly 10055b50
    void UpdateLayout(); 

protected:
    uint32 m_pad[62];
    uint32 m_nNumProfiles; // +0xf8
    uint32 m_pad2;         // +0xfc
    void*  m_pProfileList; // +0x100
    uint32 m_nSelectedProfile; // +0x110
};

#endif // PROFILEDIALOG_H
