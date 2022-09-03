#include "Person.h"

Person::Person()
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::work()
{
    cout << "Person::work()" << endl;
}
