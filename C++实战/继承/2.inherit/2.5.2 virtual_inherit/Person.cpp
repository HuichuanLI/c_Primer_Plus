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

void Person::print()
{
    cout << "name: " << name << endl;
}
