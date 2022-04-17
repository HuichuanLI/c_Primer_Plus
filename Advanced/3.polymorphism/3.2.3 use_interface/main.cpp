#include <iostream>
#include "Bird.h"
#include "Plan.h"
using namespace std;

void flyMatch(Flyable *f1, Flyable *f2)
{
    f1->fly();
    f2->fly();
}

int main()
{
    Bird *b = new Bird;
    Plan *p = new Plan;

    flyMatch(b, p);

    delete b;
    b = nullptr;
    delete p;
    p = nullptr;
    return 0;
}