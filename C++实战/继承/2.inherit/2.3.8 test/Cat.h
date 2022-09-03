#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	void color();
public:
	string skinColor;
protected:
	int age;
	string name;
};

#endif // CAT_H