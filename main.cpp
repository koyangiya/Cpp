#include "box.h"

int main()
{

    Box<int> b;
    b.add(3); b.add(4); b.add(-5);
    b.print();
    cout << endl;
    b.remove(0);
    b.print();
    b.update(0,1);
    b.print();
    return 0;
}
