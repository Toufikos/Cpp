#ifndef UNIVERSITEVEC_H_INCLUDED
#define UNIVERSITEVEC_H_INCLUDED
#include <vector>

#include "Personne.h"


class UniversiteVec
{
private:

    vector<Personne *> staff;

public:
     UniversiteVec();
     void ajouter(Personne *);
     string afficherTout();
     int nbPersonnes();
    //Personne ** getStaff();


};









#endif // UNIVERSITEVEC_H_INCLUDED
