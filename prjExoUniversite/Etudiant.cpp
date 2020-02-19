#include <iostream>
#include <sstream>
#include "Etudiant.h"

using namespace std;

 Etudiant::Etudiant(string n, string p, short a, float no)
 :Personne(n, p, a)
 {

    this->setNote(no);

 }





  string Etudiant::infos()
 {
    ostringstream oss;
    oss << Personne::infos()
        << "Note : " << this->getNote();
    return oss.str();

 }


  string Etudiant::mention()
 {

    if (this->getNote() >= 14)
            return "TB";
    if (this->getNote() >= 10)
            return "AB";
    if (this->getNote() >= 8)
            return "Rattrapage";

    return "Echec";

 }
