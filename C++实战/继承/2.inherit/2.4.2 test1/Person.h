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
protected:
	string name;
};

#endif // PERSON_H