#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person 
{
public:
	virtual ~Person() {};
	virtual void eat() = 0;
	virtual void play() = 0;
};

#endif // PERSON_H