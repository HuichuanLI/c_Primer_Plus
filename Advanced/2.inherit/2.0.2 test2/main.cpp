#include <iostream>
#include <string>
#include "Line.h"
using namespace std;

void stackInstantiation()
{
	Line line(1, 2, 3, 4);
	cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
	line.getPointA()->setPoint(7, 17);
	cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
}

int main()
{
	stackInstantiation();

	return 0;
}
