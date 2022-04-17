#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Teacher : public Person
{
public:
	Teacher();
	virtual ~Teacher();
	virtual void eat();
	void teach();
};

#endif // TEACHER_H