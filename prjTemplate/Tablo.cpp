#include <iostream>
#include "Tablo.h"

template<class T>
Tablo<T>::Tablo()
{
    indice=0;
}

template<class T>
void Tablo<T>::ajouter(T element)
{
    if (indice < 10)
    {
        valeurs[indice++] = element;
        return true;
    }
    return false;
}

template<class T>
T Tablo<T>::recup(int pos)
{
    if (pos < indice)
        return valeurs[pos];
    return NULL;
}

template<class T>
int Tablo<T>::NbElements()
{
    return indice;
}

template<class T>
bool  Tablo<T>::modifier(int pos, T val)
{
    if (pos < indice)
    {
        valeurs[pos] =  val;
        return true;
    }
    return false;
}

