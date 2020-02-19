#include <iostream>
#include <sstream>

#include "Etudiant.h"
#include "Employe.h"
#include "ChargeTD.h"
#include  "UniversiteVec.h"


UniversiteVec::UniversiteVec()
{

}

void UniversiteVec::ajouter(Personne * pToAdd)
{
    cout << "ajout vec" << endl;
    staff.push_back(pToAdd);
}


string UniversiteVec::afficherTout()
{
    ostringstream oss;

    oss << endl  << "-------- STAFF -----------" << endl;
    cout << staff.size();


    for(int i=0; i < staff.size(); i++)
    {
        oss << endl  << "-------- Pers : " << i+1 << " -----------" << endl;
        oss << (staff.at(i))->infos() << endl;


        oss << "Remboursement Secu " << (staff.at(i))->remboursementSecu();

        Etudiant * pE = dynamic_cast<Etudiant *>(staff.at(i));
        if(pE !=NULL)
        {
            oss << endl << "Mention : " << pE->mention();
        }

        Employe * pEmp = dynamic_cast<Employe *>(staff.at(i));
        if(pEmp !=NULL)
        {
            oss << endl << "Salaire Brut Annuel : " << pEmp->getSalaireAnnuel();
        }

        ChargeTD * pProf = dynamic_cast<ChargeTD *>(staff.at(i));
        if(pProf !=NULL)
        {
            oss << endl << "Salaire Brut Annuel : " << pProf->getNbH();
        }
    }
    return  oss.str();
}

