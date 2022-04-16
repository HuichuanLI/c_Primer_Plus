#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	void color();
public:
	string skinColor;
protected:
	int age;
	string name;
};

#endif // DOG_H