#include <iostream>
#include "Student.h"
using namespace std;

void tempFunc()
{
    Student stu;
    // 直接访问派生类成员，隐藏基类成员
    stu.code();
    cout << "stu.name: " << stu.name << endl;

    // 访问隐藏基类成员需要使用类名指定
    cout << "stu.Person::code: " << stu.Person::code << endl;
    stu.Person::name();
}

int main()
{
    tempFunc();
    return 0;
}