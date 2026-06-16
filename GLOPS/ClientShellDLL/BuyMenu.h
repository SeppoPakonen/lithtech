#ifndef BUYMENU_H
#define BUYMENU_H

#include "Specialty.h"
#include <string>
#include <vector>

class CBuyMenu {
public:
    virtual ~CBuyMenu() {}
    
    virtual bool Init();
    virtual void OnEnter();
    virtual void OnExit();
    virtual void Update();
    
    void SetSpecialty(SpecialtyType spec);
    void BuyItem(int itemID);
    void SetWeaponSlot(int slot, int itemID, int attachmentMask);
    
private:
    int m_CurrentCash;
    SpecialtyType m_SelectedSpecialty;
    // ...
};

class CClassSelectScreen : public CBuyMenu {
public:
    SpecialtyType GetNextAvailableSpecialty(int direction);
    void UpdateSpecialtyInfo(SpecialtyType spec);
};

class CEquipSelector {
public:
    void SetWeaponSlot(int slot, int itemID, int attachmentMask);
    void UpdatePrice();
};

#endif // BUYMENU_H
