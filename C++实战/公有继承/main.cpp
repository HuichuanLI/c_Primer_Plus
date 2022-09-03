//
// Created by lhc456 on 2022/9/3.
//
// main.cpp
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Student *stu = new Student;
    // 实例化对象访问基类数据成员，实例化对象只能访问 public 属性的数据成员和成员函数
    stu->setName("Jake");
    stu->setAge(15);
    // 实例化对象访问派生类数据成员，实例化对象只能访问 public 属性的数据成员和成员函数
    stu->setId(17);

    cout << "My name is " << stu->getName() << ", I'am " << stu->getAge() << " years old, my id is " << stu->getId() << "." << endl;

    delete stu;
    stu = nullptr;
    return 0;
}