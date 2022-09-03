#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person
{
public:
	Student(int age = 15);
	~Student();
protected:
	int age;
};

#endif // STUDENT_H