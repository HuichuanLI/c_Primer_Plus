#ifndef HIGHSTUDENT_H
#define HIGHSTUDENT_H
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class HighStudent : public Student
{
public:
	HighStudent();
	virtual ~HighStudent();
	virtual void eat();
	virtual void play();
	virtual void study();
};

#endif // HIGHSTUDENT_H