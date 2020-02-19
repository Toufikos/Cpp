#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED

using namespace std;
class Personne
{
private:
    string nom;
    int age;
    static int majorite;

    static string verifNom(string);
    void verifNom();

public:
    /*inline*/ string getNom() {return nom;};
    int getAge() {return age;};

    void setNom(string);
    void setAge(int);

    //Ctor
    Personne(string="defo", int=0);

    //Dtor
    ~Personne() { cout << "Destruction de " << this->nom;}

    //Methodes
    void infos();
    bool estMajeur();

    static void changeMajorite(int);

};







#endif // PERSONNE_H_INCLUDED
