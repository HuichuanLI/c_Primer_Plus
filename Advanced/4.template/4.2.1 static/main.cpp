#include <iostream>
#include "Student.h"
using namespace std;


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