#include <iostream>
#include <vector>
#include "Point.h"
#include <map>
#include <stack>
using namespace std;

int main()
{
    vector<int> vecInts;
    vecInts.push_back(50);
    cout << "Capacite  elements : " << vecInts.capacity();

    //Rempli le vecteur
    for(int i=0; i < 10; i++)
    {
        vecInts.push_back(i*3);
    }
    cout << "Capacite  elements : " << vecInts.capacity();

    for(int i=0; i < 5; i++)
    {
        cout << "i : "  << i << " : " <<vecInts[i] << endl;
    }

    for(int v:vecInts)
    {
         cout << "v : " << v << endl;
    }

    //cout << vecInts[10]; //Ne génére pas d'erreur alors que je suis en dehors de mon vecteur
    //cout << vecInts.at(10); // Génére une erreur en cas de dépassement

    //vecInts.clear();

    cout << "Nb elements : " << vecInts.size();
    cout << "Nb elements : " << vecInts.capacity();

    cout << endl << "---------------------------------------"<< endl;


    Point p;
    Point p2(5,5);
    Point p3(3,2);
    vector<Point> vecPoints = {p, p3};
    vecPoints.push_back(p2);

    for(Point pt:vecPoints)
    {
         pt.affiche();
    }

    cout << endl << "------- PARCOURS VIA ITERATOR -------------"<< endl;

    ////////////// Parcours via iterator
    for(vector<Point>::iterator it=vecPoints.begin(); //Init
            it != vecPoints.end(); // condition d'entr�e
            it++) //Incrementation
    {
       it->affiche();
    }


    cout << endl << "------- Dictionnaire (Association cl�/Valeur) -------------"<< endl;
    map<int, string> mapCP;
    mapCP[94] = "VDM";
    mapCP[93] = "SSD";
    mapCP[91] = "ESS";

    cout << mapCP[93];
    mapCP[93] = "Seine Saint Denis";
    cout << mapCP[93];

    cout << endl << "-------LIste des CP -------------"<< endl;
    for(map<int, string>::iterator itCP=mapCP.begin(); //Init
            itCP != mapCP.end(); // condition d'entr�e
            itCP++) //Incrementation
    {
       cout << "K : " << itCP->first << " V : " << itCP->second << endl;
    }


    //Recherch de cl�
    map<int, string>::iterator itFind= mapCP.find(94);
    cout << itFind->second;


    stack<int> pileInt;
    pileInt.push(50);
    pileInt.push(40);
    pileInt.push(30);
    pileInt.push(20);
    pileInt.push(10);

    while(!pileInt.empty())
    {
        //cout << pileInt[0];
        cout << pileInt.top() << endl;
        pileInt.pop();
        cout << "Taille : " << pileInt.size() << endl;
    }

    return 0;
}
