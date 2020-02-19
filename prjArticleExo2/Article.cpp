#include "Article.h"
#include <iostream>

using namespace std;


//Initialiser cette donnée membre statique
float Article::tauxTVA = 0.2;


//Methodes statiques
// je ne peux manipuler que des éléments statiques (variablees et/ou methodes statiques(ou de classes)
void Article::changeTVA(float newTVA)
{

    Article::tauxTVA = newTVA;
}

float Article::recupTVA()
{

    return Article::tauxTVA;
}

//Methode privée
float Article::verifValeur(float val)
{
    if (val < 0)
        return 0;
}



int   Article::getNumero()
{
        return numero;
}
void    Article::setNumero(int num)
{
    numero = num;
}

string  Article::getDesignation()
{
    return designation;

}
void    Article::setDesignation(string des)
{
    designation = des;
}
double  Article::getPrixHT()
{
    return prixHT;
}
void  Article::setPrixHT(double pHT)
{
    prixHT = verifValeur(pHT);
}

void    Article::afficheInfos()
{
    cout << " ----------------------------- "  <<endl;
    cout << "Article Numero : " <<  getNumero() <<endl;
    cout << "Designation : " << getDesignation() <<endl;
    cout << "Taux TVA : " << Article::tauxTVA * 100  << "%" << endl;
    cout << "Prix HT : " << getPrixHT() <<endl;
    cout << "Prix TTC : " <<  prixTTC() <<endl;
    cout << " ----------------------------- " <<endl;
}

double  Article::prixTTC()
{
    return getPrixHT() * (1 + Article::tauxTVA);
}

void   Article::initialise(int n, string d , double p)
{
    setNumero(n);
    setDesignation(d);
    setPrixHT(p);
}


//  3 CONSTRUCTEURS
Article::Article(int n, string d,  double p)
{
    setNumero(n);
    setDesignation(d);
    setPrixHT(p);

}

Article::Article(int n, string d)
{
    setNumero(n);
    setDesignation(d);
    setPrixHT(0);

}

Article::Article()
{
    setNumero(0);
    setDesignation("NC");
    setPrixHT(0);

}








