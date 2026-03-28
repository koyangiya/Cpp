#ifndef OBIEKT_H
#define OBIEKT_H
#include <iostream>
using namespace std;

class Obiekt
{
public:
    Obiekt() {}
    virtual ~Obiekt() {}
    virtual void print() const = 0; // metoda czysto wirtualna
};

class A : public Obiekt
{
public:
    A() {cout << "A() \n";}
    virtual ~A() {cout << "~A() \n";}
    virtual void print() const {cout << 'A';}
};

class B : public Obiekt
{
public:
    B() {cout << "B() \n";}
    virtual ~B() {cout << "~B() \n";}
    virtual void print() const {cout << 'B';}
};

class C : public Obiekt
{
public:
    C() {cout << "C() \n";}
    virtual ~C() {cout << "~C() \n";}
    virtual void print() const {cout << 'C';}
};

class D : public Obiekt
{
public:
    D() {cout << "D() \n";}
    virtual ~D() {cout << "~D() \n";}
    virtual void print() const {cout << 'D';}
};




#endif // OBIEKT_H
