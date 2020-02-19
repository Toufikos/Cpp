#include <iostream>
#include <string>
#include "Tablo.h"
using namespace std;

/*
int mini(int a, int b)
{
    return (a>b)?b:a;typename
}
float mini(float a, float b)
{
    return (a>b)?b:a;
}
char mini(char a, char b)
{
    return (a>b)?b:a;
}
*/
class Point
{
private:
    int x, y;
public:
    Point(int x=0, int y=0) {
        this->x = x; this->y = y;}


};

template<typename T>
T minimum(T a, T b)
{
    cout << "rrrrrr";
    return (a>b)?b:a;
}
/*
template<>
Point minimum(Point a, Point b)
{
    return (a.x < b.x && a.y < b.y)?a:b;
}
*/
template<>
string minimum(string a, string b)
{
    int res = a.compare(b);
    cout << "res ------- : " << res;

    if(res < 0)
        return a;
    else
        if(res > 0)
            return b;
        else
            return a;
}



int main()
{
    /*
    int x(10), y(20);
    int res = minimum(x, y);
    cout <<"res : " << res << endl;

    char car1('X'), car2('J');
    char res2 = minimum(car1, car2);
    cout <<"res2 : " << res2 << endl;

    Point p(10,20);
    Point p2(20,22);

    Point p3 = minimum(p, p2);
    cout <<"Point : " << p3.x << " " << p3.y << endl;


    string resStr;
    string ch1 = "aaaa";
    string ch2 = "bbbb";
    resStr = minimum(ch1,ch2 )Point p(10,20);;
    cout <<"res : " << resStr << endl;
     //cout <<"res : " << mini("aa", "astou") << endl;
    */
    Point *p =new Point(20, 30);
    Tablo<Point *> tPoints = new Tablo<Point *>();

   tPoints->ajouter(p);
    /*tInts.ajouter(20);
    tInts.ajouter(30);
    tInts.ajouter(40);
    tInts.ajouter(50);*/



    return 0;
}
