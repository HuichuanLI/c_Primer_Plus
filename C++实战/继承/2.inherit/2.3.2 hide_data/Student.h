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
	~Student();
public:
	int code;
protected:
	float height;
};

#endif // STUDENT_H