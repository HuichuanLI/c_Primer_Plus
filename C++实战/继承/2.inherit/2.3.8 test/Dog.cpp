#include "Dog.h"

Dog::Dog()
    : skinColor("yello")
    , age(8)
{
    cout << "Dog()" << endl;
}

Dog::~Dog()
{
    cout << "~Dog()" << endl;
}

void Dog::color()
{
    cout << "Dog----my color is: " << skinColor << endl;
}