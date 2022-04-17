#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    // err：抽象类不能实例化
    // Person *per = new Person;

    // 如果在派生类中不实现纯虚函数，派生类也将是抽象类
    Person *stu = new Student;
    stu->work();
    stu->setName("shiyanlou");
    cout << "name: " << stu->getName() << endl;
    delete stu;
    stu = nullptr;
    return 0;
}