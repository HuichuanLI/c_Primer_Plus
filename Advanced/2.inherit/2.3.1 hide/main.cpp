#include <iostream>
#include "Student.h"
using namespace std;

void tempFunc()
{
    Student stu;
    // 直接访问派生类成员，隐藏基类成员
    stu.setName("007");
    cout << stu.getName() << endl;

    // 访问隐藏基类成员需要使用类名指定
    stu.Person::setName("888");
    cout << stu.Person::getName() << endl;

    // 基类与派生类同名函数，参数类型和个数不同时，同样隐藏基类同名函数
    stu.eat(17);
    // stu.eat(); // err: 程序报错，访问的是派生类中的 eat 函数
    stu.Person::eat();
}

int main()
{
    tempFunc();
    return 0;
}