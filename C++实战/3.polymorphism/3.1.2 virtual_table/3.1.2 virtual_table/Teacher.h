#ifndef TEACHER_H
#define TEACHER_H

#include "pch.h"
#include "Person.h"

class Teacher : public Person
{
public:
	Teacher();
	virtual ~Teacher();
	virtual void work();
};

#endif // TEACHER_H