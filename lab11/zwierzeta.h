#ifndef ZWIERZETA_H
#define ZWIERZETA_H

#include<iostream>
using namespace std;

class Zwierzeta
{
public:
    Zwierzeta() = default; // to samo co puste klamerki
    virtual ~Zwierzeta() {}
    virtual string getGatunek() = 0;
};

class Zyrafy : public Zwierzeta
{
public:
    virtual ~Zyrafy() {}
    virtual string getGatunek() {return "zyrafa";}
};

class Slonie : public Zwierzeta
{
public:
    virtual ~Slonie() {cout << "~slon";}
    virtual string getGatunek() {return "slon";}
};

class Lwy : public Zwierzeta
{
public:
    virtual ~Lwy() {cout << "~lew";}
    virtual string getGatunek() {return "lew";}
};

class Malpy : public Zwierzeta
{
public:
    virtual ~Malpy() {cout << "~malpa";}
    virtual string getGatunek() {return "malpa";}
};

#endif // ZWIERZETA_H
