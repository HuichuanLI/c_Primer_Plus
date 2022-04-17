#include "DbTask.h"

DbTask::DbTask()
{
    cout << "DbTask()" << endl;
}

DbTask::~DbTask()
{
    cout << "~DbTask()" << endl;
}

void DbTask::executeTask()
{
    cout << "DbTask::executeTask()" << endl;
}

void DbTask::readDatabase()
{
    cout << "DbTask::readDatabase()" << endl;
}
