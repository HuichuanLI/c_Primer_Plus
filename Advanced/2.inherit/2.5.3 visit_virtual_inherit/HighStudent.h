#ifndef HIGHSTUDENT_H
#define HIGHSTUDENT_H
#include <iostream>
#include <string>
#include "Student.h"
#include "Child.h"
using namespace std;

class HighStudent : public Student, public Child
{
public:
	HighStudent(const string &name = "shiyanlou", int age = 15, const string &color = "blue", float h = 1.75);
	~HighStudent();
	void play();
protected:
	float height;
};

#endif // HIGHSTUDENT_H