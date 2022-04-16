#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Child : public Person
{
public:
	Child(const string &name = "shiyanlou", const string &color = "blue");
	~Child();
protected:
	string color;
};

#endif // CHILD_H