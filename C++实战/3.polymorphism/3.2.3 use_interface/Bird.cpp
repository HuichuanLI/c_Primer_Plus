#include "Bird.h"

Bird::Bird()
{
    cout << "Bird()" << endl;
}

Bird::~Bird()
{
    cout << "~Bird()" << endl;
}

void Bird::fly()
{
    cout << "Bird::fly()" << endl;
}
