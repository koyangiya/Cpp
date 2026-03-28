#ifndef PLANSZA_H
#define PLANSZA_H

#include "obiekt.h"


class Plansza
{
    Obiekt* **tab;
    int x; // ilosc wierszy
    int y; // ilosc kolumn
public:
    Plansza(int x, int y);
    virtual ~Plansza();
    friend ostream& operator<<(ostream& os, const Plansza& p);
    void Dodaj(int i, int j, char z);
};

#endif // PLANSZA_H

Plansza::Plansza(int x, int y)
{
    this -> x = x;
    this -> y = y;

    tab = new Obiekt**[x];
    for(int i = 0; i < x; ++i)
    {
        tab[i] = new Obiekt*[y] {nullptr};
    }
}

Plansza::~Plansza()
{
    for(int i = 0; i< x ; ++i)
    {
        for ( int j = 0; j < y; ++j)
        {
            delete tab[i][j];
        }
        delete[] tab[i];
    }
    delete[] tab;
}

ostream& operator<<(ostream& os, const Plansza& p)
{
    for( int i = 0; i < p.x; ++i)
    {
        for(int j = 0; j< p.y; ++j)
        {
            if(p.tab[i] [j] != nullptr)
            {
                p.tab[i] [j] -> print();
            }
            else
            {
                os << ".";
            }
        }
        os << endl;
    }
    return os;
}

void Plansza::Dodaj(int i, int j, char z)
{
    delete tab[i][j];
    switch (z)
    {
        case 'A': tab[i][j] = new A; break;
        case 'B': tab[i][j] = new B; break;
        case 'C': tab[i][j] = new C; break;
        case 'D': tab[i][j] = new D; break;
    }
}










