#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
private:
    int x, y;
public :
    Point(int x=0, int y=0)
    {
        this->x=x;
        this->y =y;
    }

    void affiche()
    {
        std::cout << "Point X : " << this->x << " Y : " << this->y << std::endl;
    }
};

#endif // POINT_H_INCLUDED
