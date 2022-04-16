#include "Person.h"

Person::Person()
	: code("007")
	, height(1.85)
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

