#include <iostream>
#include "point.h"
using namespace std;
/*
Point operator+( Point &p1,  Point &p2)
{
    Point res;
    res.Set(p1.Get() + p2.Get());
    res.Sety(p1.Gety() + p2.Gety());
    return res;
}
*/
float operator+(Point &p1,  Point &p2)
{
    float res;
    res = p1.Get() + p2.Get() + p1.Gety() + p2.Gety();
    return res;
}

/*
bool operator==(Point &p1,  Point &p2)
{
    return false;
}
bool operator!=(Point &p1,  Point &p2)
{
    return false;
}
*/
int main()
{
    cout << "Hello world!" << endl;
    Point p(2,5);

    p.affiche();

    p++;

    p.affiche();

    Point p2(10,20);
    p+=p2;

    p.affiche();


    Point p3;
    p3=p;
    p3.affiche();

    Point p4(3,9);
    /*Point pRes;
    pRes= p + p4;
    pRes.affiche();
    */

    float resultat = p + p4;

    cout<< "Resultat (float) " << resultat;


    return 0;
}
