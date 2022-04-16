#include "Person.h"

Person::Person()
{
    cout << "Person()" << endl;
}

Person::Person(const Person &p)
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::eat()
{
    cout << "Person::eat()" << endl;
}
