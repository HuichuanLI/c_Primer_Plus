#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person
{
public:
	Student(const string &name, int age);
	~Student();
	void print();
protected:
	int age;
};

#endif // STUDENT_H