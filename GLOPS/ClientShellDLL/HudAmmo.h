#ifndef HUDAMMO_H
#define HUDAMMO_H

#include "WidgetManager.h"

class HudAmmo : public CWidget {
public:
    HudAmmo();
    virtual ~HudAmmo() {}

    // 0x10059950
    void Render() override;
    
    // 0x100598d0
    void SyncBulletTextures();

private:
    HLOCALOBJ m_hBulletTextures[8]; // +0x38
    uint32 m_nAmmoType;             // +0x108
    uint32 m_nMaxAmmo;              // +0x10c
    // ... more members from assembly ...
};

#endif // HUDAMMO_H
