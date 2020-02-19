#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(int x=0, int y=0);
        ~Point();

         int Get() { return x; }
        void Set( int val) { x = val; }
         int Gety() { return y; }
        void Sety( int val) { y = val; }

        void affiche();

        Point& operator++(int);
        Point& operator+=(const Point&);
        void operator=(const Point&);

    private:
         int x;
         int y;
};

#endif // POINT_H
