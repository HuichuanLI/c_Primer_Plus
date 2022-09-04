#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Teacher;
class Student
{
	friend Teacher;
public:
	Student(const string &name, int age, float score);
	~Student();
private:
	string name;
	int age;
	float score;
	void speek();
};

#endif // STUDENT_H