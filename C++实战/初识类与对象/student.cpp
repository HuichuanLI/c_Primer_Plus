#include <iostream>
#include <string>

using namespace std;

class Student {
public: // 公有属性
    Student() {}

    ~Student() {}

    void setName(string name) { this->name = name; }

    string getName() const { return name; };

    void setAge(int age) { this->age = age; }

    int getAge() const { return age; }

private: // 私有属性
    string name;
    int age;
};


class Point {
    // 私有属性
    double x;
    double y;
public: // 公有属性
    Point() {}

    ~Point() {}

    void setX(double x) { this->x = x; }

    double getX() const { return x; };

    void setY(double y) { this->y = y; }

    double getY() const { return y; };
};

struct Cat {
    // 公有属性
    string name;

    Cat() {}

    ~Cat() {}

    void setName(string name) { this->name = name; }

    string getName() const { return name; };
};

int main() {
/*
	// 堆上实例化
	Student *stu = new Student;

    // 正确访问
	stu->setName("Siri");
	stu->setAge(5);

    // 错误访问，编译报错
    stu->name = "jake";
    stu->age = 18;

    // 正确访问
	cout << "My name is " << stu->getName() << ", I'm " << stu->getAge() << " years old." << endl;

    // 释放内存
	delete stu;
	stu = nullptr;
*/

/*
	// 堆上实例化
	Point *point = new Point;

    // 正确访问
	point->setX(1);
	point->setY(5);

    // 错误访问，私有成员不能直接访问，编译报错
    point->x = 3;
    point->y = 9;

    // 释放内存
	delete point;
	point = nullptr;
*/
    // 堆上实例化
    Cat *cat = new Cat;

    // 正确访问
    cat->setName("kitty");

    // 正确访问，name 属于公有数据成员
    cat->name = "siri";

    cout << "My name is " << cat->name << " ." << endl;

    // 释放内存
    delete cat;
    cat = nullptr;
    return 0;
}

