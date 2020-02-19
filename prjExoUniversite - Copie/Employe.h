#ifndef EMPLOYE_H_INCLUDED
#define EMPLOYE_H_INCLUDED

#include <iostream>
#include <sstream>
#include "Personne.h"




class Employe:virtual public Personne
{
private:
    double salaire;
    static float tauxCharges;
public:
    Employe(string n, string p , short a , double s=1500)
    :Personne(n, p,a)
    {
        this->setSalaire(s);
    }

    void setSalaire(double s) { this->salaire = s;}
    double getSalaire() {return salaire;}

    double getSalaireNet()
    {
        return getSalaire() * (1 - Employe::tauxCharges);
    }

    double getSalaireAnnuel()
    {
        return getSalaire() * 12;
    }

     virtual  string infos()
    {
        ostringstream oss;
        oss << Personne::infos()
            << "Salaire Net : " << this->getSalaireNet()
            << "Salaire Brut : " << this->getSalaire();
        return oss.str();

    }

    virtual float remboursementSecu()
    {
        return this->getSalaire() * 0.05;
    }


};




#endif // EMPLOYE_H_INCLUDED
