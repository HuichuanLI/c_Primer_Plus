#include <iostream>
#include "HighStudent.h"
using namespace std;

int main()
{
    HighStudent stu("jake", 15);
    stu.Student::print();
    stu.Child::print();
    return 0;
}
//在继承方式前面使用 virtual 关键字表示是虚继承。
//virtual 和 public 关键字可以互换位子，一般 virtual 在前。
//在 Student 和 Child 类中使用虚继承后，通过运行结果发现程序只调用了一次 Person 的构造函数和析构函数。
//同时在调用 print 函数时只打印了 Person 中 name 的默认值，也就是说传入 Person 的参数无效。