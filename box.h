// aplikacja typu crude (dostarcza podstawowych funkcjonalnosci) Create Read Update Delete
#ifndef BOX_H
#define BOX_H

#include <iostream>
#include <vector>
using namespace std;

template <typename Type>
class Box
{
    vector<Type> content;
public:
    Box() {};
    void add(const Type& v);
    void print() const;
    void remove(int i);
    void update(int i, const Type& v);
};

template <typename Type>
void Box<Type>::add(const Type& v)
{
    content.push_back(v);
}

template <typename Type>
void Box<Type>::print() const
{
    cout << "[";
    for(Type v : content) // niech v przyjmuje kolejno elementy z content
    {
        cout << v << ", ";
    }
    cout << "]";
}

template <typename Type>
void Box<Type>::remove(int i)
{
    content.erase(content.begin() + i);

}

template <typename Type>
void Box<Type>::update(int i, const Type& v)
{
    content(i) = v;

}



#endif // BOX_H
