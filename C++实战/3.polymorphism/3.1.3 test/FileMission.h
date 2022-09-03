#ifndef FILEMISSION_H
#define FILEMISSION_H
#include <iostream>
#include <string>
#include "Task.h"
using namespace std;

class FileMission : public Task
{
public:
	FileMission();
	virtual ~FileMission();
	virtual void doWork();
};

#endif // FILEMISSION_H