#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{
    Personne p("toto", 19);
    p.infos();

    Personne::changeMajorite(21);
    p.infos();


    Personne p2("toto", 19);
    p2.infos();

    Personne p3;
    p3.infos();

    Personne p4("titi");
    p4.infos();

    Personne p5("", 55);
    p5.infos();

    Personne p6("", 11);
    p6.infos();


    Personne *pPers = new Personne("Paul", 65);
    pPers->infos();

    delete pPers;

    return 0;
}
