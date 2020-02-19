#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include "MonException.h"

using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(int x=0, int y=0) {this->x=x ; this->y =y;}
    int getX() { return x;}
    int getY() { return y;}
    void setX(int x) {
        if (x < 0)
                //throw "Donnée invalide "; // => Lance une exception
                throw out_of_range("");
                //throw invalid_argument("Argument invalide ");
                throw MonExceptionDerive();
        this->x =x;

    }
    void setY(int y) {this->y =y;}
    void affiche() { cout << "X : " << this->x << " Y : " << this->getY();}
};




#endif // POINT_H_INCLUDED
