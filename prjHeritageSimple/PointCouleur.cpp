#include <iostream>
#include "PointCouleur.h"



PointCouleur::PointCouleur(int x, int y, char n, string c)
    :Point(x,y, n) //Apppel au constructeur de la seule classe mère
{
    //this->setX(x);
    // this->setY(y);
    this->setCouleur(c);
}

void PointCouleur::afficheCouleur()
{
    /*il voitr que affiche n'est pas dans cette classe,
     il remonte la hierarchie des classes
    */
    //this->affiche();
    //ou
    Point::affiche();

    //this->nom = 'R';

    std::cout << "De couleur : " << this->getCouleur();

}


void PointCouleur::affiche()
{

    Point::affiche();


    std::cout << "De couleur : " << this->getCouleur();

}









