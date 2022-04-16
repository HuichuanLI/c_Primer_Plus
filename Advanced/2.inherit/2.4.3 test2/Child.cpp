#include "Child.h"

Child::Child(const string &name)
    : name(name)
{
    cout << "Child()" << endl;
}

Child::~Child()
{
    cout << "~Child()" << endl;
}

