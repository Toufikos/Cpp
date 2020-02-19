#include <iostream>

using namespace std;

void affiche()
{
     cout << "Ma methode affiche" << endl;
}


namespace mySpace
{
    void affiche()
    {
         cout << "Ma methode affiche de mySpace" << endl;
    }
}

namespace messenger
{
    void affiche()
    {
         cout << "Ma methode affiche de Messenger" << endl;
    }
}

using namespace messenger;
using namespace mySpace;

class Personne
{
private:
    string nom;
    string prenom;
    short age;

public:
    Personne(string n="\0", string p="\0", short a=18)
    {
        this->setNom(n);
        this->setPren(p);
        this->setAge(a);
    }
    //Personne();

    string getNom() {return this->nom;}
    void setNom(string n) { this->nom = n;}

    string getPren() {return this->prenom;}
    void setPren(string p) { this->prenom = p;}

    short getAge() {return this->age;}
    void setAge(short a) { this->age = a;}


};

int f()
{
    int val=10;
    return val;
}

int main()
{
    cout << "Hello world!" << endl;

    mySpace::affiche();
    /*mySpace::affiche();
    messenger::affiche();
*/
    enum class SITU_FAM{CELIB, MARIE, DIVORCE, AUTRES};

    SITU_FAM masituation = SITU_FAM::MARIE;


    //auto : inférence de type
    //Le type est resolu à la compilation
    auto var = 10;

    cout << var;

    auto *p = new Personne("eertyu", "fghjkl", 45);
    cout << p->getNom();

    auto res= f();
    return 0;
}
