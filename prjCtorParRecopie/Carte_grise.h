#ifndef CARTE_GRISE_H_INCLUDED
#define CARTE_GRISE_H_INCLUDED

class Carte_Grise
{
private:
        int numero;
public:
        Carte_Grise(int n) : numero(n) {}
        void affiche()
        {
            std::cout << "Numero CG : " << numero << std::endl;
        }
        void setNumeroCarte(int newNum)
        {
            this->numero = newNum;
        }
        int getNumeroCarte()
        {
            return this->numero;
        }
        ~Carte_Grise()
        {
            std::cout << "Destruction Carte Grise Numero : " << this->numero;

        }
};


#endif // CARTE_GRISE_H_INCLUDED
