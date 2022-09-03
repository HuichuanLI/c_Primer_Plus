#include <iostream>
#include "Student.h"
using namespace std;

void tempFunc()
{
    Student stu;
    // 直接访问派生类数据成员，隐藏基类数据成员
    cout << "stu.code: " << stu.code << endl;

    // 访问隐藏基类数据成员需要使用类名指定
    cout << "stu.Person::code: " << stu.Person::code << endl;
}

int main()
{
    tempFunc();
    return 0;
}