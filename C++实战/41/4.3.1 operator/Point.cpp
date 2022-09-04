#include "Point.h"

Point::Point(double x, double y)
    : x(x)
    , y(y)
{
    cout << "Point(double x, double y)" << endl;
}

Point::Point(const Point &p)
{
     cout << "Point(const Point &p)" << endl;
     this->x = p.x;
     this->y = p.y;
}

Point::~Point()
{
    cout << "~Point()" << endl;
}

ostream& operator<<(ostream& out, const Point& p)
{
    out << "Point(" << p.x << ", " << p.y << ")" << endl;
    return out;
}

Point& Point::operator=(const Point& p)
{
    // 不优化：不判断直接赋值
    // this->x = p.x;
    // this->y = p.y;
    
    // 优化：判断地址相同表示同一个对象，不必赋值
    cout << "operator=(const Point& p)" << endl;
    if(this != &p) {
        this->x = p.x;
        this->y = p.y;
    }
    return *this;
}

double Point::operator[](int index)
{
    if(index < 0 || index > 1)
        throw out_of_range("index out of range, index range in [0, 1].");
    if(0 == index)
        return this->x;
    if(1 == index)
        return this->y;
}

Point& Point::operator++()
{
    ++this->x;
    ++this->y;
    return *this;
}

Point Point::operator++(int)
{
    Point temp(*this);
    operator++();
    return temp;
}

Point& Point::operator--()
{
    --this->x;
    --this->y;
    return *this;
}

Point Point::operator--(int)
{
    Point temp(*this);
    operator--();
    return temp;
}

Point& Point::operator-()
{
    this->x = -this->x;
    this->y = -this->y;
    return *this;
}

Point Point::operator+(const Point& p)
{
    // Point temp;
    // temp.x = this->x + p.x;
    // temp.y = this->y + p.y;
    // return temp;

    return Point(this->x + p.x, this->y + p.y);
}

Point& Point::operator+=(const Point& p)
{
    this->x += p.x;
    this->y += p.y;
    return *this;
}

// Point Point::operator-(const Point& p)
// {
//     return Point(this->x - p.x, this->y - p.y);
// }

// Point& Point::operator-=(const Point& p)
// {
//     this->x -= p.x;
//     this->y -= p.y;
//     return *this;
// }


Point operator-(const Point& a, const Point& b)
{
    return Point(a.x - b.x, a.y - b.y);
}

Point& operator-=(Point& a, const Point& b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}