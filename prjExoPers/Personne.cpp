#include <iostream>
#include "Personne.h"

using namespace std;

int Personne::majorite = 18;

void Personne::setNom(string nom)
{
    //this : op�rateur d'autreference
    // Il permet de lever l'ambiguit� lorsque l'argument a le meme nom qu'une donn�e membre !!!!!!s
    //il correspond � l'instance courante
    //Ce mot cl� ne peut s'utuiliser que dans des methodes d'instance !!!!!!!!
    //En aucun cas dans des methodes statiques (appel�es aussi m�thode de classe )
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


