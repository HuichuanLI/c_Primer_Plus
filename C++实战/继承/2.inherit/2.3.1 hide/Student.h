#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person // 公有继承
{
public:
	Student();
	~Student();
	void eat(int type);
	void setName(const string &name); 
	string getName() const;
private:
	string name;
};

#endif // STUDENT_H