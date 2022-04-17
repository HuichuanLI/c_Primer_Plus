#ifndef FILETASK_H
#define FILETASK_H
#include <iostream>
#include <string>
#include "Task.h"
using namespace std;

class FileTask : public Task
{
public:
	FileTask();
	virtual ~FileTask();
	virtual void executeTask();
	void readFile();
};

#endif // FILETASK_H