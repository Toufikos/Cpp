#include <iostream>
#include "Voiture.h"
#include "Carte_grise.h"
using namespace std;

int main()
{
    int val;
    val = 0;

    int val2(10);


    cout << "val : " << val << endl;
    cout << "val2 : " << val2 << endl;

    Voiture v("Corsa");
    v.affiche();

    cout  <<endl << "-----------------------" <<endl;

    Voiture v2(v);
    v2.affiche();
    cout  <<endl << "-----------------------" <<endl;


    v.changeNumeroCarte(77777);
    v.affiche();
    cout  <<endl << "-----------------------" <<endl;
    v2.affiche();

    cout  <<endl << "-----------------------" <<endl;
    return 0;
}
