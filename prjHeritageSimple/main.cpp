#include <iostream>
#include <sstream>

#include "Point.h"
#include "PointCouleur.h"
#include "Cercle.h"

using namespace std;

//Permet de renvoyer une chaine concaténée
string returnChaine()
{
    ostringstream oss;
    string pren = "Steeve";
    string nom = "ASSOUS";
    oss << "Coucou " << pren <<  " " << nom << endl;
    return oss.str();

}



int main()
{
    //string ch = returnChaine();
    //cout << ch;



    //Point p(10,15, 'O');

    //p.affiche();

    //p.nom='Z'; impossible car nom est protected

    /*
    PointCouleur pColor(2, 5, 'Z', "Jaune");

    //pColor.afficheCouleur();
    pColor.affiche();

    cout << endl;
Destruction du Cercle
    Point * pt;
    pt = new Point(5, 5, 'E');
    pt->affiche();

    cout << endl;
    PointCouleur * ptC;
    ptC = new PointCouleur(6, 6, 'F', "Fuschia" );
    ptC->affiche();

    cout << endl;
    */
    /*******************************************************************************/
    /*
        PointCouleur est un Point
        Dans un objet de type Point, je peux donc mettre une instance
        d'un PointCouleur
    */
    Point * pt2;
    pt2 = new PointCouleur(7, 7, 'G', "Green");
    /*
    Du fait de la methode virtuelle, il est capable de faire appel
    à la methode affiche non pas en fonction du type de l'objet déclaré (ici Point)
    mais en fonction du type de l'élément réellement instancé (ici PointCouleur)

    => POLYMORPHISME

    */
    //pt2->affiche();

    /***********************************************************************************/

//    delete pt;
//    delete ptC;
//    delete pt2;
//
//    Cercle c(5,5,'C', 8);
//    c.affiche();


    Point * tPoints[4];

    tPoints[0] = new Point(4,4,'P');
    tPoints[1] = new Cercle(8,8,'C',10);
    tPoints[2] = new PointCouleur(10,10,'W', "White");
    tPoints[3] = new Cercle(18,18,'K',5);

    Cercle * pCercle = NULL;
    PointCouleur * pColor = NULL;

    cout << endl << "----------- Liste du Tableau --------" << endl;
    for(int i=0; i < 4; i++)
    {
        tPoints[i]->affiche();
        cout << endl<< " ------ Valeur de x : " << tPoints[i]->getX() << endl;
        //ligne suivante impossible en l'état !!!!!
        //cout << endl<< " ------ Rayon  : " << tPoints[i]->getCouleur() << endl;

        pCercle = dynamic_cast<Cercle *>(tPoints[i]);
        //Si pCercle == NULL Cast n'est pas possible
        if(pCercle == NULL)
        {
            cout << endl<< "Cast Impossible !!!!" << endl;
        }
        else
        {
            cout << endl<< "Cast OK !!!!" << endl;
            cout << endl<< "Rayon : "  << pCercle->getRayon() << endl;
        }

        pColor = dynamic_cast<PointCouleur *>(tPoints[i]);
        if (pColor != NULL)
        {
            cout << endl<< "Color : "  << pColor->getCouleur() << endl;
        }



        cout << endl << "----------------------------------" << endl;
    }

    /*cout << endl << "----------- Liste du Tableau (Maniere 2)--------" << endl;
    for(Point *p :tPoints)
    {
        p->affiche();
        cout << endl << "----------------------------------" << endl;
    }*/



    //DESTRUCTION
    for(int i=0; i < 4; i++)
    {
        delete tPoints[i];
    }


    delete []tPoints;


    Point p(10, 10, 'N');
    p.affiche();





    return 0;
}
