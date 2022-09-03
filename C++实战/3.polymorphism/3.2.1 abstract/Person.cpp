#include "Person.h"

Person::Person()
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::setName(const string &name)
{
    this->name = name;
}

string Person::getName() const
{
    return name;
}
