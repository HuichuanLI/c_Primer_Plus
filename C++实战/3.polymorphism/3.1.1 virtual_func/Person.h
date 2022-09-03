#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person 
{
public:
	Person();
	virtual ~Person();
	virtual void work();
};

#endif // PERSON_H