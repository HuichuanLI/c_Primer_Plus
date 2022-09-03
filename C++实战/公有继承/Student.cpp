//
// Created by lhc456 on 2022/9/3.
//
// Student.cpp
#include "Student.h"
Student::Student()
{
    cout << "Student()" << endl;
    // 在派生类（学生类）中直接访问 public 和 protected 属性基类数据成员
    name = "jake";
    age = 15;
}