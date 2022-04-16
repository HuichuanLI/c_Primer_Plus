#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person 
{
public:
	Person();
	Person(const Person &p);
	~Person();
	void eat();
};

#endif // PERSON_H