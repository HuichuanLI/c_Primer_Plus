#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student();
	~Student();
	static int getCount();
private:
	static int count;
};

#endif // STUDENT_H