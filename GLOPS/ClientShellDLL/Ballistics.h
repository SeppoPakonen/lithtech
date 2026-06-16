#ifndef BALLISTICS_H
#define BALLISTICS_H

#include "ltbasedefs.h"

// Forward declarations
class CWeapon;
class FXManager;

// Structure simulating IntersectQuery
struct ClientIntersectQuery {
    LTVector m_From;
    LTVector m_To;
    uint32 m_Flags;
    uint32 m_FilterFn;
    void* m_pUserData;
};

// Structure simulating IntersectInfo
struct ClientIntersectInfo {
    LTVector m_Point;
    LTPlane m_Plane;
    HOBJECT m_hObject;
    HPOLY m_hPoly;
    uint32 m_SurfaceFlags;
};

// Function found at 0x1000f1c0 handling the ballistics raycast
void ProcessBulletImpact(ClientIntersectQuery* pQuery);

#endif // BALLISTICS_H
