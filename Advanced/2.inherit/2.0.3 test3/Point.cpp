#include <iostream>
#include <string>
using namespace std;

class Point 
{
public:
	// 使用带参数默认构造函数，并使用初始化列表初始化 x，y
	Point(double x = 0, double y = 0) : x(x), y(y) {
		cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
	}
	// 拷贝构造函数
	Point(const Point & p) {
		cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
		this->x = p.x; 
		this->y = p.y; 
	}
	// 析构函数，由于没有申请内存，析构函数中不需要做什么
	~Point() {
		cout << "~Point():(" << x << ", " << y << ")" << endl;
	}
	// x, y 绑定的成成员函数
	void setPoint(const Point &p) {
		this->x = p.x; 
		this->y = p.y; 
	}
	void setPoint(double x, double y) {
		this->x = x; 
		this->y = y; 
	}
	void setX(double x) { this->x = x; }
	double getX() { return x; }
	void setY(double y) { this->y = y; }
	double getY() { return y; }
private:
	double x;
	double y;
};

int main()
{
    return 0;
}