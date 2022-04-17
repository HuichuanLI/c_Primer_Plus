#ifndef DBMISSION_H
#define DBMISSION_H

#include <iostream>
#include <string>
#include "Task.h"
using namespace std;

class DbMission : public Task
{
public:
	DbMission();
	virtual ~DbMission();
	virtual void doWork();
};

#endif // DBMISSION_H