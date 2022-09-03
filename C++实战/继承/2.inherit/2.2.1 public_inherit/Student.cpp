#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
    // 在派生类（学生类）中分别访问 public、 protected 和 private 属性基类数据成员
    height = 1.75;
    name = "jake";
    age = 15;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}
