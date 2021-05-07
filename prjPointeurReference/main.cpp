#include <iostream>

using namespace std;

double som(int *a, const int *b, const int &c)
{
    //*b = 10;
    //c= 10;
    return *a + *b + c;
}



int main()
{
    int i=10;
    int j;
    j=0;

    int k(5);
    cout << i << " " << j << " " << k;

    int * pt_sur_variable;
    int variable;

    pt_sur_variable = &variable;

    cout << endl << "*pt_sur_variable: " << *pt_sur_variable;

    int &ref_sur_variable(variable);
    cout << endl << "ref_sur_variable : "<< ref_sur_variable;

    int tab[3] = {10,20,30};

    int *  pt_normal;
    pt_normal = tab;
    cout << endl << " pt_normal : " << *pt_normal;
    pt_normal++;
    cout << endl << " pt_normal++ : " << *pt_normal;

    //Pointeur constant
    int * const pt_constant = tab;

    cout << endl << " pt_constant : " << *pt_constant;
    //pt_constant++; //IMPOSSIBLE car pointeur constant
    cout << endl << "ref_sur_variable : "<< ref_sur_variable;
    //Pointeur sur info constante
    int valeur = 66;
    const int * pt_info_constante;
    pt_info_constante = tab;
    cout << endl << " pt_info_constante : " << *pt_info_constante;
    //    *pt_info_constante = 77;  //IMPOSSIBLE
    pt_info_constante++;
    cout << endl << " pt_info_constante : " << *pt_info_constante;


    //ref sur info constante
    ref_sur_variable = 88;
    cout << endl << "ref_sur_variable : "<< ref_sur_variable;
    cout << endl << "ref_sur_variable : "<< variable;

    const int &ref_info_constante = 99;
//    ref_info_constante = 100; //IMPOSSIBLE de modifier la valeur


    int va=10;
    int vb=20;
    int vc=30;
    double res= som(&va, &vb, vc);
    cout <<  "Res : " << res;



    return 0;
}
