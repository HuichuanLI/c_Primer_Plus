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
	void eat();
	void setName(const string &name); 
	string getName() const;
protected:
	string name;
};

#endif // PERSON_H