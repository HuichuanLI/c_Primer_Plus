#ifndef CIRCLR_H
#define CIRCLR_H
#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

class Circle : public Shape
{
public:
	Circle(float r);
	virtual ~Circle();
	virtual float calcArea();
	virtual float calcPerimeter();
private:
	const float Pi = 3.1415926;
	float radius;
};

#endif // CIRCLR_H