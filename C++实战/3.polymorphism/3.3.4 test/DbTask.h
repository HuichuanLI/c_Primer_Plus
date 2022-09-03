#ifndef DBTASK_H
#define DBTASK_H
#include <iostream>
#include <string>
#include "Task.h"
using namespace std;

class DbTask : public Task
{
public:
	DbTask();
	virtual ~DbTask();
	virtual void executeTask();
	void readDatabase();
};

#endif // DBTASK_H