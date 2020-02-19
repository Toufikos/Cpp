#include <iostream>
#include "vecteur3d.h"

using namespace std;

vecteur3d::vecteur3d(float c1, float c2, float c3)
{
    x = c1;
    y = c2;
    z = c3;
}

void vecteur3d::affiche()
{
    cout << "X : " << x << " Y : " << y << " Z : " << z << endl;
}


bool vecteur3d::coincide(vecteur3d v3d)
{
    return ((v3d.x == x) && (v3d.y == y) && (v3d.z == z));
}

bool vecteur3d::coincide(vecteur3d * ptv3d)
{
    return (((*ptv3d).x == x) && (ptv3d->y == y) && (ptv3d->z == z));
}

bool vecteur3d::coincideRef(vecteur3d &refv3d)
{
    return ((refv3d.x == x) && (refv3d.y == y) && (refv3d.z == z));
}
