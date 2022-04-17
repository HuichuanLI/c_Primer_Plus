#ifndef STUDENT_H
#define STUDENT_H

#include "pch.h"
#include "Person.h"

class Student : public Person
{
public:
	Student();
	virtual ~Student();
	virtual void work();
};

#endif // STUDENT_H