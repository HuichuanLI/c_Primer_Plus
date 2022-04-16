#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student *stu = new Student;
    stu->setName("Jake");
    stu->setAge(15);
    stu->setId(17);
    cout << "My name is " << stu->getName() << ", I'am " << stu->getAge() << " years old, my id is " << stu->getId() << "." << endl;
    delete stu;
    stu = nullptr;
    return 0;
}