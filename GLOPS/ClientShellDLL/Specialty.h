#ifndef SPECIALTY_H
#define SPECIALTY_H

enum SpecialtyType {
    SPECIALTY_COMMANDO = 0,
    SPECIALTY_RECON = 1,
    SPECIALTY_SNIPER = 2,
    SPECIALTY_DEMOMAN = 3,
    SPECIALTY_MEDIC = 4,
    SPECIALTY_HEAVYGUNNER = 5,
    SPECIALTY_VIP = 6,
    SPECIALTY_UNKNOWN = 7,
    NUM_SPECIALTIES = 7
};

struct SpecialtyAttributes {
    float moveSpeedMultiplier;
    float recoilMultiplier;
    float reloadSpeedMultiplier;
    bool canUseMedikit;
    bool canUseLSD; // Life Sign Detector?
    bool canUseThermal;
    int maxArmor;
};

#endif // SPECIALTY_H
