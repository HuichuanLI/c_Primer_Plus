#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

class Rectangle : public Shape
{
public:
	Rectangle(float w, float h);
	virtual ~Rectangle();
	virtual float calcArea();
	virtual float calcPerimeter();
private:
	float width;
	float height;
};

#endif // RECTANGLE_H