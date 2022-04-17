#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}

void Student::setId(int id)
{
    this->id = id;
}

int Student::getId() const
{
    return id;
}
