#include <iostream>
#include "HighStudent.h"
using namespace std;

int main()
{
    // err：Person 类为接口类，不能实例化
    // Person *per = new Person;

    // err：Student 类为抽象类，不能实例化
    // Person *stu = new Student;

    Person *stu1 = new HighStudent;
    stu1->eat();

    Student *stu2 = new HighStudent;
    stu2->eat();
    stu2->study();

    delete stu1;
    stu1 = nullptr;
    delete stu2;
    stu2 = nullptr;

    return 0;
}