#include <iostream>
#include "Personne.h"

using namespace std;

int Personne::majorite = 18;

void Personne::setNom(string nom)
{
    //this : opérateur d'autreference
    // Il permet de lever l'ambiguité lorsque l'argument a le meme nom qu'une donnée membre !!!!!!s
    //il correspond à l'instance courante
    //Ce mot clé ne peut s'utuiliser que dans des methodes d'instance !!!!!!!!
    //En aucun cas dans des methodes statiques (appelées aussi méthode de classe )
    this->nom = nom;
    //nom = Personne::verifNom(n);
    verifNom();
}


void Personne::setAge(int age)
{
    this->age = age;
}

//Ctor
Personne::Personne(string n, int a)
{
    this->setNom(n);
    //nom =n;
    this->setAge(a);
}

//Methodes
void Personne::infos()
{
    cout << "Nom :" << getNom() << endl;
    cout << "Age :" << this->getAge() << endl;

    if (estMajeur())
    {
        cout << "Vous etes majeur(e)" << endl;
    }
    else
    {
        cout << "Vous etes mineur(e)"<< endl;
    }


}
bool Personne::estMajeur()
{
    return age >=  Personne::majorite;
}

void Personne::changeMajorite(int newMaj)
{
    Personne::majorite =  newMaj;
}

//statique
string  Personne::verifNom(string nomToCheck)
{
    if (nomToCheck.length() > 20)
        return "NC";
    else
        return nomToCheck;
}


//Non statique
void  Personne::verifNom()
{
    if (this->nom.length() > 20)
        nom = "NC";

}


