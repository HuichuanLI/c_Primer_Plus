#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person
{
public:
	Student();
	virtual ~Student();
	virtual void eat();
	void study();
};

#endif // STUDENT_H