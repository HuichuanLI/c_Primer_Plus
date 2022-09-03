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
	virtual void work() = 0;
	void setName(const string &name);
	string getName() const;
protected:
	string name;
};

#endif // PERSON_H