#include <iostream>
#include <sstream>
#include "Personne.h"



 Personne::Personne(string n, string p, short a)
 {
    this->setNom(n);
    this->setPren(p);
    this->setAge(a);
 }

 string Personne::infos()
 {
    ostringstream oss;
    oss << "Nom " << this->getNom()
        << "Prénom : " << this->getPren()
        << "Age : " << this->getAge();

    return oss.str();

 }
