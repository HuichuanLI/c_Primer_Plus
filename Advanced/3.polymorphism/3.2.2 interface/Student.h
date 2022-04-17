#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person
{
public:
	Student();
	virtual ~Student();
	virtual void study() = 0;
	void setId(int id);
	int getId() const;
protected:
	int id;
};

#endif // STUDENT_H