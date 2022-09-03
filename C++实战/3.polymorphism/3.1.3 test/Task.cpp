#include "Task.h"

Task::Task()
{
    cout << "Task()" << endl;
}

Task::~Task()
{
    cout << "~Task()" << endl;
}

void Task::doWork()
{
    cout << "Task::doWork()" << endl;
}
