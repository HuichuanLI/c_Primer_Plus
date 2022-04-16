#include "HighStudent.h"

HighStudent::HighStudent(const string &name, int age, const string &color, float h)
    : Student(name, age)
    , Child(name, color)
    , height(h)
{
    cout << "HighStudent()" << endl;
}

HighStudent::~HighStudent()
{
    cout << "~HighStudent()" << endl;
}

