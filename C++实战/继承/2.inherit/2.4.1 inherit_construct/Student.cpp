#include "Student.h"

Student::Student(const string &name, int age)
    : Person(name)
    , age(age)
{
    cout << "Student()" << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}

void Student::print()
{
    cout << "name: " << name << ", age: " << age << endl;
}
