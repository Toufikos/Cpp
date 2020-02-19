#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED

#include <iostream>
#include "Carte_grise.h"

using namespace std;

class Voiture
{
private:
    string nom;
    Carte_Grise *carte;

public:
    Voiture(string n) //:nom(n)
    {
        nom =n;
        carte = new Carte_Grise(44444);
    } //{nom =n;}

    void affiche()
    {
        cout << "Voiture : " << nom << endl;
        this->carte->affiche();
    }

    void changeNumeroCarte(int newNum)
    {
        this->carte->setNumeroCarte(newNum);
    }

    ~Voiture()
    {
        cout << "Destruction de Voiture " << this->nom;
        delete carte;
    }

    //Constructeur par Recopie
    Voiture(const Voiture& v)
    {
        this->nom = v.nom;
        this->carte = new Carte_Grise(v.carte->getNumeroCarte());
    }





};




#endif // VOITURE_H_INCLUDED
