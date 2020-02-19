#ifndef UNIVERSITE_H_INCLUDED
#define UNIVERSITE_H_INCLUDED

#include "Personne.h"
#include "Etudiant.h"
#include "Employe.h"

class Universite
{
private:

    Personne * staff[5];
    short nbPers;
public:
    Universite();
     bool ajouter(Personne *);
     string afficherTout();
    //Personne ** getStaff();


};




#endif // UNIVERSITE_H_INCLUDED
