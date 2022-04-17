#include <iostream>
#include <typeinfo>
#include "FileTask.h"
#include "DbTask.h"
using namespace std;

void doSomething(Task *p)
{
    p->executeTask();
    if(typeid(*p) == typeid(FileTask)) {
        FileTask *stu = dynamic_cast<FileTask*>(p);
        stu->readFile();
    }
    if(typeid(*p) == typeid(DbTask)) {
        DbTask *tea = dynamic_cast<DbTask*>(p);
        tea->readDatabase();
    }
}

int main()
{
    Task *ft = new FileTask;
    Task *dt = new DbTask;
    doSomething(ft);
    doSomething(dt);

    delete ft;
    ft = nullptr;
    delete dt;
    dt = nullptr;

    return 0;
}