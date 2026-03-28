#ifndef POCIAG_H
#define POCIAG_H

#include "zwierzeta.h"
#include <vector>

class Wagon
{
    Zwierzeta* wsk;
    int n;
public:
    Wagon(Zwierzeta* wsk = nullptr, int n = 0);
    virtual ~Wagon();
    friend ostream& operator<<(ostream& os, const Wagon& w);
};

class Pociag
{
    vector<Wagon*> lista;// przekazuje adresy wagonow
public:
    Pociag() {}
    ~Pociag() {}
    void operator+=(Wagon* wsk);
    void operator-=(int n);
    friend ostream& operator<<(ostream& os, Pociag& p);
};

Wagon::Wagon(Zwierzeta* wsk, int n)
{
    this -> wsk = wsk;
    this -> n = n;
}

Wagon::~Wagon()
{
    delete wsk;
}

ostream& operator<<(ostream& os, const Wagon& w)
{
    os << "[" << w.wsk -> getGatunek() << ", " << w.n << "]"; // czemu strzalka??????
    return os;
}

void Pociag::operator+=(Wagon* wsk)
{
    lista.push_back(wsk); // dodaje element do wektora
}

ostream& operator<<(ostream& os, Pociag& p)
{
    for (Wagon* wsk : p.lista) // range based for loop
    {
        os << *wsk << "<->"; // wyluskuje obiekt spod adresu
    }
}

void Pociag::operator-=(int n)
{
    lista.erase(lista.begin() + n); // i ustawi sie na po elemencie usunietym
}


#endif // POCIAG_H
