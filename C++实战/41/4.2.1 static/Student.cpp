#include "Student.h"

int Student::count = 0;

Student::Student()
{
    ++count;
    cout << "Student()" << endl;
}

Student::~Student()
{
    --count;
    cout << "~Student()" << endl;
}

int Student::getCount()
{
    return count;
}
