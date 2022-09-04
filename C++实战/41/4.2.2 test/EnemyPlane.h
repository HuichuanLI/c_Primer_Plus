#ifndef ENEMYPLANE_H
#define EnemyPlENEMYPLANE_Hane_H
#include <iostream>
#include <string>
using namespace std;

class EnemyPlane
{
public:
	EnemyPlane();
	~EnemyPlane();
	static int getCount();
private:
	static int count;
};

#endif // ENEMYPLANE_H