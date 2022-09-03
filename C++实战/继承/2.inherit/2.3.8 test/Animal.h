#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
	Animal();
	Animal(const Animal &p);
	virtual ~Animal();
	void color();
public:
	string skinColor;
};

#endif // ANIMAL_H