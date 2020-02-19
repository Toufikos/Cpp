#ifndef CHARGETD_H_INCLUDED
#define CHARGETD_H_INCLUDED

#include "Employe.h"
#include "Etudiant.h"


//Heritage multiple
class ChargeTD :  public Employe, public Etudiant
{

private:
        int nbH;
        float txHoraire;

public:
        ChargeTD(string, string, short, double, float, int, float);

        int getNbH() { return this->nbH;}
        void setNbH(int nb) { this->nbH = nb;}

        float getTx() { return this->txHoraire;}
        void setTx(float t) { this->txHoraire = t;}

        virtual string infos();


        virtual float remboursementSecu();




};




#endif // CHARGETD_H_INCLUDED
