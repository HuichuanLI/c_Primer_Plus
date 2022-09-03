#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(int age = 15);
	~Student();
protected:
	int age;
};

#endif // STUDENT_H