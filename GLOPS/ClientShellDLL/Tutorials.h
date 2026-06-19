#ifndef TUTORIALS_H
#define TUTORIALS_H

#include "ltbasedefs.h"

struct TutorialInfo {
    char szName[64];
    char szDescription[256];
    char szMap[64];
};

class Tutorials {
public:
    Tutorials();
    virtual ~Tutorials();

    static void LoadTutorials(); // 0x10068800

    static TutorialInfo* s_pTutorials;
    static uint32 s_nNumTutorials;
};

#endif // TUTORIALS_H
