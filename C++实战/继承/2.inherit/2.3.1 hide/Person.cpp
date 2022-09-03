#include "Person.h"

Person::Person()
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::eat()
{
	cout << "Person::eat" << endl;
}

void Person::setName(const string &name)
{
	cout << "Person::setName" << endl;
	this->name = name;
}

string Person::getName() const 
{
	cout << "Person::getName" << endl;
	return name; 
};
