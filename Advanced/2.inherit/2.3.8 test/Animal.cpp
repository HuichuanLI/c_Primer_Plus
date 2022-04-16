#include "Animal.h"

Animal::Animal()
    : skinColor("gray")
{
    cout << "Animal()" << endl;
}

Animal::Animal(const Animal &p)
    : skinColor(p.skinColor)
{
    cout << "Animal(const Animal &p)" << endl;
}

Animal::~Animal()
{
    cout << "~Animal()" << endl;
}

void Animal::color()
{
    cout << "Animal----my color is: " << skinColor << endl;
}
