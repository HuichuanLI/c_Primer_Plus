#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{
    Complex c1(5, 3);
    Complex c2(7, 5);

    Complex c3 = c1 * c2;
    cout << c3;

    return 0;
}