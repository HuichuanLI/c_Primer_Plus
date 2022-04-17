#ifndef OTHERMISSION_H
#define OTHERMISSION_H

#include <iostream>
#include <string>
#include "Task.h"
using namespace std;

class OtherMission : public Task
{
public:
	OtherMission();
	virtual ~OtherMission();
	virtual void doWork();
};

#endif // OTHERMISSION_H