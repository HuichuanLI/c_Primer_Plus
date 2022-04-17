#ifndef SHAPE_H
#define SHAPE_H

class Shape 
{
public:
	virtual ~Shape() {};
	virtual float calcArea() = 0;
	virtual float calcPerimeter() = 0;
};

#endif // SHAPE_H