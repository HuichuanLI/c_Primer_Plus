#include "HighStudent.h"

HighStudent::HighStudent(float h)
    : height(h)
{
    cout << "HighStudent()" << endl;
}

HighStudent::~HighStudent()
{
    cout << "~HighStudent()" << endl;
}

void HighStudent::print()
{
    cout << "name: " << name << ", age: " << age << ", height: " << height << endl;
}
