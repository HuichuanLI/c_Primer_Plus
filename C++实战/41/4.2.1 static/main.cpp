#include <iostream>
#include "Student.h"
using namespace std;

//静态局部变量在全局数据区分配内存。
//静态局部变量只初始化一次。
//静态局部变量一般在声明处初始化，如果没有显式初始化，会被程序自动初始化为 0。
//静态局部变量比普通局部变量生命周期长，始终驻留在全局数据区，直到程序运行结束。但其作用域还是为局部作用域，当定义它的函数或语句块结束时，其作用域随之结束。

int main()
{
    cout << Student::getCount() << endl;

    Student *stu1 = new Student;
    cout << stu1->getCount() << endl;

    Student *stu2 = new Student;
    cout << stu2->getCount() << endl;


    delete stu1;
    stu1 = nullptr;
    cout << Student::getCount() << endl;
    delete stu2;
    stu2 = nullptr;
    cout << Student::getCount() << endl;

    return 0;
}