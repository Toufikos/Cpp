#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED

#include "Point.h"


class Cercle : public Point
{
    private:
            float rayon;

    public:
            Cercle(int=0, int=0, char='\0', float=1);
            void setRayon(float r) { this->rayon =r; }
            float getRayon() {return this->rayon;}
            virtual void affiche();
            virtual ~Cercle()
            {
                std::cout << std::endl << "Destruction du Cercle";
            }

};






#endif // CERCLE_H_INCLUDED
