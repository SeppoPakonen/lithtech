#include "EquipSelectWidget.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

EquipSelector::EquipSelector() {
}

EquipSelector::~EquipSelector() {
}

void EquipSelector::ResetSlots() {
}

void EquipSelector::UpdateSlot(uint32 slot, uint32 itemId, uint32 val1, uint32 val2) {
}

// 0x1008b2a7
void EquipSelector::SetWeaponSlot(uint32 slot, uint32 weaponId) {
    // Select weapon logic
    // g_pLTClient->CPrint("EquipSelector::SetWeaponSlot called");
}
