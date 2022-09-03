#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person 
{
public:
	Person();
	~Person();
public:
	string code;
protected:
	float height;
};

#endif // PERSON_H