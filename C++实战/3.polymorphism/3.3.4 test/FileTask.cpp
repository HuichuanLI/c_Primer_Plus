#include "FileTask.h"

FileTask::FileTask()
{
    cout << "FileTask()" << endl;
}

FileTask::~FileTask()
{
    cout << "~FileTask()" << endl;
}

void FileTask::executeTask()
{
    cout << "FileTask::executeTask()" << endl;
}

void FileTask::readFile()
{
    cout << "FileTask::readFile()" << endl;
}
