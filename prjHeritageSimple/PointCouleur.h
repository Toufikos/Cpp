#ifndef POINTCOULEUR_H_INCLUDED
#define POINTCOULEUR_H_INCLUDED

#include "Point.h"

using namespace std;

class PointCouleur: public Point
{
    private:
        string couleur;

    public:
        PointCouleur(int=0, int=0, char ='\0', string="Black");
        void setCouleur(string c)
        {
            this->couleur =  c;
        }

        string getCouleur()
        {
            return this->couleur;
        }

        void afficheCouleur();

        virtual void affiche();

        virtual ~PointCouleur()
        {
            cout << std::endl << "Destruction de PointCouleur";
        }

};





#endif // POINTCOULEUR_H_INCLUDED
