#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED



class Point2D
{
private:
    char nom;
    int x;
    int y;

public:
    void affiche();
    void affiche(std::string);
    void afficheMessage(std::string);

    char getNom(); //getter accesseur
    void setNom(char); //setter mutateur

    int getX() {return x;} ;
    void setX(int);

    int getY();
    void setY(int);

    void deplace(int, int);
};




#endif // POINT_H_INCLUDED
