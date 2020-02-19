#include <iostream>
#include "Personne.h"
#include "Etudiant.h"
#include "Employe.h"
#include "Universite.h"
#include "ChargeTD.h"
#include "UniversiteVec.h"

float Employe::tauxCharges=0.2;

using namespace std;

int main()
{
   /*Personne p("aaaaa", "bbbb", 15);
   cout << p.infos() << endl;

   Etudiant e("xxxx", "zzzz", 19, 19);
   cout << e.infos()<< endl;
   cout << e.mention()<< endl;

   Employe s("kkkkk", "lllll", 55, 5000);
   cout << s.infos()<< endl;
   cout << s.getSalaireAnnuel()<< endl;
   */


   Universite fac;
   bool res=false;
   //res=fac.ajouter(new Personne("as", "steeve", 30));
   //cout << res;
   res=fac.ajouter(new Etudiant("dupont", "didier", 20, 18));
   cout << res;
   res=fac.ajouter(new Employe("aber", "jean", 30, 3000));
   cout << res;
   res=fac.ajouter(new ChargeTD("besseron", "sylvain", 40, 2000, 15, 10, 45.99));
   cout << res;
   cout << fac.afficherTout();

    cout << endl << " ***************************************** " << endl;
    UniversiteVec vec;
    vec.ajouter(new Etudiant("Noel", "Jimmy", 25, 20));
    vec.ajouter(new Employe("Gates", "Bill", 55, 200000));
    vec.ajouter(new ChargeTD("Mazeau", "Doris", 25, 20,1500,10,50));
    vec.ajouter(new Etudiant("Assous", "Benjamin", 20, 10));


    cout << vec.afficherTout();







    return 0;
}
