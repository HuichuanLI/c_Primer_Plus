#include <iostream>
#include <string>
#include "Line.h"
using namespace std;


class Array 
{
public:
	Array(int Len = 0) : Len(Len) { cout << "Array()" << endl; }
	~Array() { cout << "~Array()" << endl; }
	Array *setLen(int Len) { 
        this->Len = Len; 
        return this;
    }
	// Array &setLen(int Len) { 
    //     this->Len = Len; 
    //     return *this;
    // }
	int getLen() { return Len; }
	void print() {cout << "Len = " << Len << endl;}
private:
	int Len;
};

void stackInstantiation()
{
	/*
	Point point(5, 7);
	Point *p = &point;
	cout << "p:(" << p->getX() << ", " << p->getY() << ")" << endl;
	*/

	Line line(1, 2, 3, 4);
	cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
	line.getPointA()->setPoint(7, 17);
	cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
	
/*
	Array arr1(5);
	cout << "this addr: " << arr1.setLen(7) << endl;
	cout << "obj addr: " << &arr1 << endl;
	Array arr2(3);
	cout << "this addr: " << arr2.setLen(6) << endl;
	cout << "obj addr: " << &arr2 << endl;
	*/
}

int main()
{
	/*
    Point *point1 = new Point(1, 2);
	Point *point2 = nullptr;
	point2 = new Point(3, 4);

	cout << "point1:(" << point1->getX() << ", " << point1->getY() << ")" << endl;
	cout << "point2:(" << (*point2).getX() << ", " << (*point2).getY() << ")" << endl;

    delete point1;
    point1 = nullptr;
	delete point2;
	point2 = nullptr;
	*/

	stackInstantiation();

/*
	Line *p = new Line(1, 2, 3, 4);

	cout << "sizeof (p) = " << sizeof (p) << endl;
	cout << "sizeof (Line) = " << sizeof (Line) << endl;

	delete p;
	p = nullptr;
	*/

	return 0;
}
