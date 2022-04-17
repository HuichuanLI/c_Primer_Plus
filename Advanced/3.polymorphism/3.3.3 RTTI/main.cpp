#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;

void doSomething(Person *p)
{
    p->eat();
    if(typeid(*p) == typeid(Student)) {
        Student *stu = dynamic_cast<Student*>(p);
        stu->study();
    }
    if(typeid(*p) == typeid(Teacher)) {
        Teacher *tea = dynamic_cast<Teacher*>(p);
        tea->teach();
    }
}

int main()
{
    Student stu;
    Teacher tea;
    doSomething(&stu);
    doSomething(&tea);

    return 0;
}