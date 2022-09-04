#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

int main()
{
    Circle c(3, 4);
    c.visitPoint();

    return 0;
}