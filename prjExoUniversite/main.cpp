#include <iostream>
#include "Personne.h"
#include "Etudiant.h"
#include "Employe.h"
#include "Universite.h"

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
   res=fac.ajouter(new Personne("as", "steeve", 30));
   cout << res;
   res=fac.ajouter(new Etudiant("dupont", "didier", 20, 18));
   cout << res;
   res=fac.ajouter(new Employe("aber", "jean", 30, 3000));
   cout << res;
   res=fac.ajouter(new Personne("as", "sandrine", 40));
    cout << res;
   cout << fac.afficherTout();










    return 0;
}
