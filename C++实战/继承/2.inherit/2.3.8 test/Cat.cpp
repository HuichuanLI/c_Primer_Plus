#include "Cat.h"

Cat::Cat()
    : skinColor("blackwhite")
    , age(5)
{
    cout << "Cat()" << endl;
}

Cat::~Cat()
{
    cout << "~Cat()" << endl;
}

void Cat::color()
{
    cout << "Cat----my color is: " << skinColor << endl;
}