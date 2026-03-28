#include <iostream>
#include "pociag.h"


using namespace std;

int main()
{
    Wagon w1(new Slonie, 3);
    Wagon w2(new Lwy, 2);
    Wagon w3(new Malpy, 10);
    cout << w1 << endl;

    Pociag p;
    p+=(&w1);
    p+=(&w2);
    p+=(&w3);
    cout << w2 << endl;
    cout << w3 << endl;
    p-=w1;

    return 0;
}
