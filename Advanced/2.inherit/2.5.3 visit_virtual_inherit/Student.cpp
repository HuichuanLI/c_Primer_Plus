#include "Student.h"

Student::Student(const string &name, int age)
    : age(age)
    , Person("Student: " + name)
{
    cout << "Student()" << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}
