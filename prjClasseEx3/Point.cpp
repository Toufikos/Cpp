#include <iostream>
#include "Point.h"

char Point::getNom()
{
    return std::toupper(nom);
}

void Point::setNom(char n)
{
    if (((n >= 'A') && (n <= 'Z')) ||
        ((n >= 'a') && (n <= 'z')))
        nom = n;
    else
        nom='\0';
}

void Point::setX(int vX) {

    if (vX >= 0)
        x = vX;
    else
        x=-1;
}

int Point::getY()
{
    return y;
}

void Point::setY(int vY)
{
    y = vY;
}

void Point::affiche()
{
    std::cout << std::endl << "Point " << getNom()  << " "
    <<  getX() << " Y : " <<  getY() << std::endl;
}


void Point::deplace(int dx, int dy)
{
    x+=dx;
    y+=dy;
}

void Point::afficheMessage(std::string msg)
{
    std::cout << "Message : " << msg ;
    affiche();
}


void Point::affiche(std::string msg)
{
    std::cout << "Message : " << msg;
    affiche();
}


Point::Point(char n, int vX, int vY)
{
    setNom(n);
    setX(vX);
    setY(vY);
}

Point::Point(char n, int v)
{
    setNom(n);
    setX(v);
    setY(v);
}
Point::Point(char n)
{
    setNom(n);
    setX(0);
    setY(0);
}

Point::Point()
{
    setNom('-');
    setX(0);
    setY(0);
}

//Destructeur est appelé avant la destruction réelle de l'objet
//Pas de surcharge possible !!!!
Point::~Point()
{
    std::cout << "Destruction de l'Objet !!!" << getNom() << std::endl;
}




