#include <iostream>
#include "Student.h"
using namespace std;

void tempFunc(Person p)
{
    p.eat();
}

void tempFunc_ref(Person &p)
{
    p.eat();
}

void tempFunc_p(Person *p)
{
    p->eat();
}

int main()
{
    Student stu;
    Person per;
    tempFunc(stu);
    tempFunc(per);

    return 0;
}