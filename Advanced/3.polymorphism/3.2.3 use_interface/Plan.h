#ifndef PLAN_H
#define PLAN_H
#include <iostream>
#include <string>
#include "Flyable.h"
using namespace std;

class Plan : public Flyable
{
public:
	Plan();
	virtual ~Plan();
	virtual void fly();
};

#endif // PLAN_H