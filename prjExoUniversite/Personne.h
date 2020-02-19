#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED

using namespace std;

class Personne
{
private:
    string nom;
    string prenom;
    short age;

public:
    Personne(string, string, short=18);

    string getNom() {return this->nom;}
    void setNom(string n) { this->nom = n;}

    string getPren() {return this->prenom;}
    void setPren(string p) { this->prenom = p;}

    short getAge() {return this->age;}
    void setAge(short a) { this->age = a;}

    virtual string infos();


};

#endif // PERSONNE_H_INCLUDED
