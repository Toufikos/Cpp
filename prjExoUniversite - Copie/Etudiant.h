#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include "Personne.h"

class Etudiant:virtual public Personne
{
private:
    float note;
public:
    Etudiant(string, string, short=18,float=10);

    void setNote(float n) { this->note = n;}
    float getNote() {return note;}

     virtual string infos();
      string mention();

    virtual float remboursementSecu()
    {
        return 50;
    }
};


#endif // ETUDIANT_H_INCLUDED
