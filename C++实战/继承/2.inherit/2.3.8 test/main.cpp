#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;

void tempFunc(Animal p)
{
    p.color();
}

void tempFunc_ref(Animal &p)
{
    p.color();
}

void tempFunc_p(Animal *p)
{
    p->color();
}

int main()
{
    Cat c;
    Dog d;
    c.Animal::skinColor = "Cat-black";
    d.Animal::skinColor = "Dog-red";
    Animal ac(c);
    Animal ad = d;
    ac.color();
    ad.color();

    tempFunc(ac);
    tempFunc(ad);
    Animal a;
    tempFunc(a);

    return 0;
}