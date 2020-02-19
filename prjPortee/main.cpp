#include <iostream>

using namespace std;

int fonction()
{
    int automatique = 20;
    return automatique;
}

int * fonction2()
{
    int automatique = 20;
    return &automatique; //cette variable disparait dés la sortie de la fonction
    //mon pointeur de retour pointe sur une variable qui a disparu !!!
}


int * fonction3()
{
    int * pVal = new int(44);
    return pVal;
}
int main()
{
    int res=0;

    res= fonction();

    cout << "Res : " <<  res << endl;

    int * pRes= NULL;
    /*pRes=fonction2();

    cout << "pRes : " <<  *pRes << endl;
    */
    pRes=fonction3();

    cout << "pRes : " <<  *pRes << endl;


    delete pRes;


    return 0;
}
