#include <iostream>
#include <sstream>
#include "Personne.h"

 /*Personne::Personne()
 {
    this->setNom("tryu");
    this->setPren("");
    this->setAge(0);
 }*/

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
        << "Pr�nom : " << this->getPren()
        << "Age : " << this->getAge();

    return oss.str();

 }
