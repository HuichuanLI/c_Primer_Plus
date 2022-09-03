// 3.1.2 virtual_table.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "Teacher.h"
#include "Student.h"

int main()
{
	Person *per = new Person;
	Person *stu = new Student;
	Person *tea = new Teacher;
	per->work();
	stu->work();
	tea->work();
	delete per;
	per = nullptr;
	delete stu;
	stu = nullptr;
	delete tea;
	tea = nullptr;
}
