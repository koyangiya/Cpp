#ifndef ARRAYTP_H
#define ARRAYTP_H

#include <iostream>
using namespace std;

template <typename T, int n> // T to rola typu, n to literal
class ArrayTP
{
    T tab[n];
    // int n; -- gdyby nie bylo szablonu template
    // int *tab -- gdyby nie bylo szablonu template
public:
    ArrayTP(const T& v); // v - value, bezpieczna stala referencja
    void print() const;
    void sort();

};

template <typename T, int n>
ArrayTP<T,n>::ArrayTP(const T& v)
{
    for(int i = 0; i<n; ++i) tab[i] = v;
}

template <typename T, int n>
void ArrayTP<T,n>::print() const
{
    cout << '[';
    for (T v : tab) // zmienna v przeszukuj tablice, range-based for loop
    {
        cout << v << ' ';
    }
    cout << ']' << endl;
}

template <typename T, int n>
void ArrayTP<T,n>::sort()
{
    // samodzielnie
}





#endif // ARRAYTP_H
