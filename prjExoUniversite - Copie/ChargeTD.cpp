
#include "ChargeTD.h"

 ChargeTD::ChargeTD(string n, string p, short a, double s, float no, int nb, float t)
    :Etudiant(n, p, a, no), Employe(n, p, a, s)
 {
    this->setNbH(nb);
    this->setTx(t);
 }



string ChargeTD::infos()
{
    ostringstream oss;
    oss << Etudiant::infos() << endl << Employe::getSalaire()
        << "Nb Heures : " << this->getNbH()
        << "Taux Horaire : " << this->getTx();

    return oss.str();

}

float ChargeTD::remboursementSecu()
{
    //return Etudiant::remboursementSecu();
     //return Employe::remboursementSecu();
    return getTx() * getNbH() * 0.05;

}







