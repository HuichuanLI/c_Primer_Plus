#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
	// 派生类中访问数据成员
	code = 17;
	height = 1.75;
	cout << "Student::code: " << Person::code << endl;
	cout << "Student::height: " << Person::height << endl;

	// 派生类中访问基类中数据成员
	cout << "Person::code: " << Person::code << endl;
	cout << "Person::height: " << Person::height << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}
