#include "Person.h"

Person::Person(const string &name)
    : name(name)
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

