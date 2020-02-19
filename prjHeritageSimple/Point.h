#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
    private:

        int x, y;

    protected:
        char nom;

    public:
        Point(int=0, int=0, char='\0');

        int getX() { return (*this).x; }
        void setX(int x) { this->x = x;}

        int getY() { return this->y; }
        void setY(int y) { this->y = y;}

        virtual void affiche();

         virtual  ~Point()
        {
            std::cout << std::endl <<  "Destruction de Point";
        }

};



#endif // POINT_H_INCLUDED
