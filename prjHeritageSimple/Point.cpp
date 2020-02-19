#include <iostream>
#include "Point.h"

Point::Point(int x, int y, char n)
{
    this->setX(x);
    this->setY(y);
    this->nom =n;
}

void Point::affiche()
{
    std::cout << "Point " << nom << " X : " << this->getX()
        << " Y : " << this->getY() << std::endl;
}
