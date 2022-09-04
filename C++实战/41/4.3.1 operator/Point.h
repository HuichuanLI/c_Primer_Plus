#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
using namespace std;

class Point
{
	friend ostream& operator<<(ostream& out, const Point& p);
public:
	Point(double x = 0, double y = 0);
	Point(const Point &p);
	~Point();

	Point& operator=(const Point& p);
	double operator[](int index);

	Point& operator++();	// 前置 ++
	Point operator++(int);	// 后置 ++
	Point& operator--();	// 前置 --
	Point operator--(int);	// 后置 --
	Point& operator-();

	Point operator+(const Point& p);
	Point& operator+=(const Point& p);
	// Point operator-(const Point& p);
	// Point& operator-=(const Point& p);
	friend Point operator-(const Point& a, const Point& b);
	friend Point& operator-=(Point& a, const Point& b);
private:
	double x;
	double y;
};

#endif // POINT_H