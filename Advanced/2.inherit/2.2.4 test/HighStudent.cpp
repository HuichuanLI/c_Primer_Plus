#include "HighStudent.h"

HighStudent::HighStudent()
{
    cout << "HighStudent()" << endl;
    name = "siri";
    age = 16;
    cout << "HighStudent: name: " << name << ", age: " << age << endl;
}

HighStudent::~HighStudent()
{
    cout << "~HighStudent()" << endl;
}