#include <iostream>
#include "point.h"

Point::Point(int x, int y)
{
    this->Set(x);
    this->Sety(y);
}

Point::~Point()
{
    //dtor
    std::cout << "Destruction du Point ";
}


void Point::affiche()
{
    std::cout << "X : " << this->Get() << " Y : " << this->Gety() << std::endl;
}

//POST INCREMENTATION
//Surcharge l'operateur p++
Point& Point::operator++(int)
{
    x++;
    y++;

    return *this;
}

//Surcharge l'operateur +=
Point& Point::operator+=(const Point& pt)
{
    x+= pt.x;
    y+= pt.y;

     return *this;
}


void Point::operator=(const Point& pt)
{
    this->Set(pt.x);
    this->Sety(pt.y);

}



