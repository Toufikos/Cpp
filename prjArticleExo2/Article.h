#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED
#include <iostream>
using namespace std;




class Article
{
private:
        int numero;
        string designation;
        double prixHT;

        static float tauxTVA; //Donnée membre statique : partagée par toutes les instances (UML : souligné)
        float verifValeur(float);

public:
        //Constructeur :
        //  est appelé automatiquement à la construction
        Article(int, string, double);
        Article(int, string);
        Article();


        int getNumero();
        void setNumero(int);
        string getDesignation();
        void setDesignation(string);
        double getPrixHT();
        void setPrixHT(double);

        void afficheInfos();
        double prixTTC();
        void initialise(int, string, double);

        //Methodes statiques (de classe)
        static void changeTVA(float);
        static float recupTVA();

};




#endif // ARTICLE_H_INCLUDED
