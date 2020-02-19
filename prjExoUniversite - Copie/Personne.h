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
    Personne(string="\0", string="\0", short=18);
    //Personne();

    string getNom() {return this->nom;}
    void setNom(string n) { this->nom = n;}

    string getPren() {return this->prenom;}
    void setPren(string p) { this->prenom = p;}

    short getAge() {return this->age;}
    void setAge(short a) { this->age = a;}

    virtual string infos();

    //Methode Abstraite =  Methode Virtuelle pure
    //Consequence => Les classes filles ont !!!!! l'obligation !!!!!!!
    // d'implémenter cette méthode !!!!!!!

    //CLasse devient par conséquent abstraite !!!!!
    virtual float remboursementSecu() = 0;


};

#endif // PERSONNE_H_INCLUDED
