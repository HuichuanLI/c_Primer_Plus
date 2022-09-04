#include "EnemyPlane.h"

int EnemyPlane::count = 0;

EnemyPlane::EnemyPlane()
{
    ++count;
    cout << "EnemyPlane()" << endl;
}

EnemyPlane::~EnemyPlane()
{
    --count;
    cout << "~EnemyPlane()" << endl;
}

int EnemyPlane::getCount()
{
    return count;
}
