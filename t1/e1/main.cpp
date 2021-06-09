#include <iostream>
using namespace std;


int ajout(int a)
{
    a+=2;
    return a;
}

int main()
{
    int ageUser = 31, ageU(32), result;
    cout << "Bismillah !" << endl << ageUser << endl << ageU;

    result = ajout(ageUser);

    cout << "Age : " << result;


    return 0;
}
