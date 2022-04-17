#include <iostream>
#include <list>
#include "EnemyPlane.h"
using namespace std;


int main()
{
    cout << EnemyPlane::getCount() << endl;

    list<EnemyPlane*> planes;

    for(int i = 0; i < 10; i++) {
        planes.push_back(new EnemyPlane);
    }

    cout << EnemyPlane::getCount() << endl;

    for(auto it = planes.begin(); it != planes.end();) {
        delete (*it);
        (*it) = nullptr;
        planes.erase(it++);
    }
    cout << EnemyPlane::getCount() << endl;

    return 0;
}