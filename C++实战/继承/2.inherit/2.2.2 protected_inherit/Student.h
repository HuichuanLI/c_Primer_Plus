#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : private Person
{
public:
	Student();
	~Student();
};

#endif // STUDENT_H