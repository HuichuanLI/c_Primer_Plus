#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
	name = "shiyanlou";
}

Student::~Student()
{
    cout << "~Student()" << endl;
}

void Student::code()
{
	cout << "Student::code()" << endl;
}