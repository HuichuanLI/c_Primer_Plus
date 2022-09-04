#include "Student.h"

Student::Student(const string &name, int age, float score) : name(name), age(age), score(score)
{
    cout << "Student()" << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}

void Student::speek()
{
    cout << "my name is " << name << endl;
}