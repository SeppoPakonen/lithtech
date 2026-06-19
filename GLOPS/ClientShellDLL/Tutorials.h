#ifndef TUTORIALS_H
#define TUTORIALS_H

#include "ltbasedefs.h"

// Forward declarations for LithTech client and console functions
class ILTClient;

struct TutorialInfo {
    char title[64];
    uint32 teamID;
    uint32 specialty;
    char primary_weapon[32];
    char primary_weapon_attachment1[32];
    char primary_weapon_attachment2[32];
    char primary_weapon_attachment3[32];
    char sidearm[32];
    char sidearm_attachment1[32];
    char sidearm_attachment2[32];
    char sidearm_attachment3[32];
    char equipment1[32];
    char equipment2[32];
    char equipment3[32];
    char mapname[64];
};

class Tutorials {
public:
    static void LoadTutorials();
    
private:
    static TutorialInfo* s_pTutorials;
    static uint32 s_nNumTutorials;
};

#endif // TUTORIALS_H
