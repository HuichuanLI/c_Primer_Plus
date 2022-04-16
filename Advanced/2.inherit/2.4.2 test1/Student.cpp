#include "Student.h"

Student::Student(int age)
    : age(age)
{
    cout << "Student()" << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}
