#include "Person.h"

Person::Person()
	: code("007")
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::name()
{
    cout << "Person::name()" << endl;
}