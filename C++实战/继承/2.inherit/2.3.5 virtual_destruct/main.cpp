#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Person *p = new Student;
    delete p;
    p = nullptr;
    return 0;
}