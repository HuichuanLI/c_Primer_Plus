#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}

void Student::eat(int type)
{
    cout << "Student::eat" << endl;
}

void Student::setName(const string &name)
{
	cout << "Student::setName" << endl;
	this->name = name;
}

string Student::getName() const 
{
	cout << "Student::getName" << endl;
	return name; 
};
