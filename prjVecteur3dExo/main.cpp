#include <iostream>
#include "vecteur3d.h"

using namespace std;

int main()
{
    vecteur3d v1(10,20,30);
    vecteur3d v2(11,20,30);
    vecteur3d v3(10,20,30);

    //bool res = v1.coincide(v3);
    //bool res = v1.coincide(&v2);
    bool res = v1.coincideRef(v3);
    if (res == true)
    {
        cout << "Idem ";
    }
    else
        cout << "Different ";


    return 0;
}
