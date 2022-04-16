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
	void code();
	string name;
};

#endif // STUDENT_H