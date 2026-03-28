#include "obiekt.h"
#include "plansza.h"
int main()
{
    Plansza P(10, 10);
    cout << P << endl << endl;
    P.Dodaj(0,0,'A');
    P.Dodaj(3,2,'B');
    P.Dodaj(9,8,'C');
    P.Dodaj(2,7,'D');
    cout << P << endl << endl;


    return 0;
}
