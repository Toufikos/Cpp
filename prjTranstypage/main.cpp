#include <iostream>

using namespace std;

struct point
{
    int x, y;
};


int main()
{

    //static cast permet de g�n�rer une erreur de compilation
    //lors d'un cast incoh�rent
    float ui =10;
    unsigned int v = 20;
    struct point pA;
    //point &ref_sur_point = pA;
    //point &ref_sur_point = static_cast<point&>(ui);


    //const_cast : permet de changer la valeur point�e par unr reference
    int i=3;
    const int &rci = i;
    const_cast<int&>(rci) = 4;
    std::cout  << "i : " << i;



    return 0;
}
