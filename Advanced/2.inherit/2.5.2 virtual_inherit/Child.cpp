#include "Child.h"

Child::Child(const string &name, const string &color)
    : color(color)
    , Person("Child: " + name)
{
    cout << "Child()" << endl;
}

Child::~Child()
{
    cout << "~Child()" << endl;
}

