#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person 
{
public:
	Person(const string &name = "shiyanlou");
	~Person();
	void print();
protected:
	string name;
};

#endif // PERSON_H