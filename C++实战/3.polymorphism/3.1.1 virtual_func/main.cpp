#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;
//
//静态多态
//        静态多态又叫做早绑定，将不同特殊行为和单个泛化记号相关联，由于这种关联处理于编译期而非运行期，因此被称为 “静态”。可以用来实现类型安全、运行高效的同质对象集合操作。
//
//静态多态表现的形式：
//
//函数重载。
//运算符重载。
//带变量的宏多态。
//动态多态
//        动态多态又叫做晚绑定，生效于运行期。
//
//定义：指相同对象收到不同消息或不同对象收到相同消息时产生动作的不同。
//
//多态的语法核心是 virtual 关键字，必须使用 virtual 才能使多个类之间建立多态关系。
//
//动态多态要素：
//
//首先需要存在继承。
//基类中使用 virtual 关键字修饰函数，派生类中重新实现该函数。
//使用方法：基类类型 变量名 = new 派生类对象(参数列表);
int main()
{
    Person *per = new Person;
    Person *stu = new Student;
    Person *tea = new Teacher;
    per->work();
    stu->work();
    tea->work();
    delete per;
    per = nullptr;
    delete stu;
    stu = nullptr;
    delete tea;
    tea = nullptr;
    return 0;
}