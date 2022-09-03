#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include <string>
using namespace std;

class Child 
{
public:
	Child(const string &name = "shiyanlou");
	~Child();
protected:
	string name;
};

#endif // CHILD_H