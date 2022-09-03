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
	virtual void work();
};

#endif // TEACHER_H