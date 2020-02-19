#ifndef TABLO_H_INCLUDED
#define TABLO_H_INCLUDED

template<class T>
class Tablo
{
private:
    T valeurs[10];
    int indice;
public:
    Tablo();
    void ajouter(T);
    T recup(int);
    int NbElements();
    bool modifier(int, T);

};






#endif // TABLO_H_INCLUDED
