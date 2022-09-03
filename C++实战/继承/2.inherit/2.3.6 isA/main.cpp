#include <iostream>
#include "Student.h"
using namespace std;

void tempFunc()
{
    Student stu;
    // 使用派生类初始化或赋值基类
    // Person per1(stu);
    Person per1 = stu;
    // Person *p = &stu;
    // Person per2;
    // per2 = stu;

    // 使用基类对象访问派生类中被继承的成员
    // cout << per1.name << endl;

    // err：使用派生类初始化或赋值基类，基类对象只能访问派生类中被继承的成员
    // cout << per1.code << endl;

    // err：基类不能实例化或者赋值派生类
    // stu = per1;
    // Student *pStu = &per1;
}

int main()
{
    tempFunc();
    return 0;
}