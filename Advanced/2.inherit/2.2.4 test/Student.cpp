#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
    // 在派生类（学生类）中直接访问 protected 属性基类数据成员
    name = "shiyanlou";
    age = 7;
	// err: 无法访问私有数据成员
	// height = 185;
    cout << "Student: name: " << name << ", age: " << age << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}
