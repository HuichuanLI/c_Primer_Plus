#include "Teacher.h"

Teacher::Teacher(const string &name, int age, float score) : stu(name, age, score)
{
    cout << "Teacher()" << endl;
}

Teacher::~Teacher()
{
    cout << "~Teacher()" << endl;
}

void Teacher::visitStudent()
{
    stu.speek();
    cout << "my score is " << stu.score << endl;
}