#include <iostream>
#include "Cercle.h"


Cercle::Cercle(int x, int y , char n, float r)
    :Point(x, y, n)
{
    this->setRayon(r);
}

void Cercle::affiche()
{
    Point::affiche();
    std::cout << "De Rayon" << this->getRayon();
}
