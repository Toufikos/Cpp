#include <iostream>
#include "Article.h"

using namespace std;

int main()
{


    string ch;
    ch = "toto";
    std::cout << ch.length();

    Article art(123, "Marteau", 10);
    //art.initialise(12345, "Marteau", 10);

    art.afficheInfos();


    Article art2(456, "Tourne vis", -1);
    art2.afficheInfos();

    Article art3;
    art3.afficheInfos();

    Article::changeTVA(0.21);
    cout << "Taux TVA : " << Article::recupTVA() *100 << "%" << endl;

    Article art4(123, "Marteau", 100);
    art4.afficheInfos();





    return 0;
}
