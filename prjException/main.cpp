#include <iostream>
#include "Point.h"

#include "MonException.h"
using namespace std;

int main()
{
    //Portion de code à surveiller
    try
    {
        Point p(10,20);

        p.affiche();

        p.setX(-1);
    }
    //Attraper l'exception
    catch(const char * ex)
    {
        cout << endl <<"Exception Message : " << ex  << endl;
    }
    catch(std::exception ex)
    {
        cout << "Exception : " << ex.what();
    }
    catch(MonException ex)
    {
        cout << "MonException : " << ex.getMessage();
    }
    catch(MonExceptionDerive ex)
    {
        cout << "MonExceptionDerive : " << ex.getMessage();
    }

    catch(...)
    {
        cout << "Autre Exception !!!" ;
    }








    cout << endl << "fin" ;

    return 0;
}
