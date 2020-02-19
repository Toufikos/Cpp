#include <iostream>
#include <sstream>
#include  "Universite.h"

/*Personne ** Universite::getStaff()
{
    return *(this->staff);
}*/



Universite::Universite()
{
    nbPers =0;
}

bool Universite::ajouter(Personne * pToAdd)
{
    cout << "ajout";
    if (nbPers < 5)
    {
        staff[nbPers] = pToAdd;
        cout << "nbpers : " << nbPers;

        cout << staff[nbPers]->infos();
        nbPers++;

        return true;
    }
    return false;
}


string Universite::afficherTout()
{
    ostringstream oss;

    oss << endl  << "-------- STAFF -----------" << endl;

    for(int i=0; i < nbPers; i++)
    {
        oss << endl  << "-------- Pers : " << i+1 << " -----------" << endl;
        oss << staff[i]->infos() << endl;


        oss << "Remboursement Secu " << staff[i]->remboursementSecu();

        Etudiant * pE = dynamic_cast<Etudiant *>(staff[i]);
        if(pE !=NULL)
        {
            oss << endl << "Mention : " << pE->mention();
        }

        Employe * pEmp = dynamic_cast<Employe *>(staff[i]);
        if(pEmp !=NULL)
        {
            oss << endl << "Salaire Brut Annuel : " << pEmp->getSalaireAnnuel();
        }


    }
    return  oss.str();
}

