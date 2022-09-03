#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
    // 在派生类（学生类）中直接访问 protected 属性基类数据成员
    name = "jake";
    age = 15;
    cout << "name: " << name << ", age: " << age << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}
