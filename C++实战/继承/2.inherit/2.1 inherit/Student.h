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
	void setId(int id);
	int getId() const;
private: // 私有数据成员
	int id;
};

#endif // STUDENT_H