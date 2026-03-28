#include "arraytp.h"

class Obiekt
{
    int x;
public:
    Obiekt(int x = 0) : x(x) {}
    friend ostream& operator<<(ostream& os, const Obiekt& obj)
    {
        os << "obj[" << obj.x << "]";
        return os;
    }

    bool operator<(const Obiekt& obj)
    {
        return this -> x < obj.x;
    }

};

int main()
{
    ArrayTP<int,10> tablica(10);
    tablica.print();

    ArrayTP<int,10> tabInt(10);
    tabInt.print();

    ArrayTP<bool, 5> tabBool(true);
    tabBool.print();

    Obiekt obj(5);
    ArrayTP<Obiekt, 6> tabObiekt(obj);
    tabObiekt.print();


    return 0;
}
