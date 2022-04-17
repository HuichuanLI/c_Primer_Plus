#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string>
#include "Flyable.h"
using namespace std;

class Bird : public Flyable
{
public:
	Bird();
	virtual ~Bird();
	virtual void fly();
};

#endif // BIRD_H