#include <iostream>
#include "Point.h"
using namespace std;

int main()
{

   Point objPoint; //Crée un objet Point

   objPoint.setNom('a');
   objPoint.setX(10);
   objPoint.setY(15);

   //cout << "Point de  nom : " << objPoint.getNom();

   objPoint.affiche();
   objPoint.deplace(10, 3);
   objPoint.affiche();
   Point p;
   p.affiche();

   objPoint.afficheMessage("Description d'un Point !!!");
   objPoint.affiche("Surcharge de methodes !!");


    Point p1('A', 10,11);
    p1.affiche();

    Point p2('B', 99);
    p2.affiche();

    Point p3('C');
    p3.affiche();

    Point p4;
    p4.affiche();


    Point p5 = p1;
    p5.setNom('D');
    p5.affiche();

    p5.deplace(10, 10);
    p5.affiche();

    p1.affiche();

    {
        Point p3('K');
        p3.affiche();

        Point *p6;
        p6 = new Point('Z', 9,9);
        (*p6).affiche();

        delete p6;
    }
    //(*p6).affiche();

    //Point& p7 = new Point('Y', 20, 20);





    return 0;
}
