#include "Complex.h"

Complex::Complex(double r, double i)
    : real(r)
    , image(i)
{
    cout << "Complex(double r, double i)" << endl;
}

Complex::Complex(const Complex &c)
{
     cout << "Complex(const Complex &c)" << endl;
     this->real = c.real;
     this->image = c.image;
}

Complex::~Complex()
{
    cout << "~Complex()" << endl;
}

ostream& operator<<(ostream& out, const Complex& c)
{
    out << "Complex(" << c.real << ", " << c.image << ")" << endl;
    return out;
}

Complex& Complex::operator=(const Complex& c)
{
    if(this != &c) {
        this->real = c.real;
        this->image = c.image;
    }
    return *this;
}

Complex& Complex::operator++()
{
    ++this->real;
    ++this->image;
    return *this;
}

Complex Complex::operator++(int)
{
    Complex temp(*this);
    operator++();
    return temp;
}

Complex& Complex::operator--()
{
    --this->real;
    --this->image;
    return *this;
}

Complex Complex::operator--(int)
{
    Complex temp(*this);
    operator--();
    return temp;
}

Complex& Complex::operator-()
{
    this->real = -this->real;
    this->image = -this->image;
    return *this;
}

Complex operator+(const Complex& a, const Complex& b)
{
    return Complex(a.real + b.real, a.image + b.image);
}

Complex& operator+=(Complex& a, const Complex& b)
{
    a.real += b.real;
    a.image += b.image;
    return a;
}

Complex operator-(const Complex& a, const Complex& b)
{
    return Complex(a.real - b.real, a.image - b.image);
}

Complex& operator-=(Complex& a, const Complex& b)
{
    a.real -= b.real;
    a.image -= b.image;
    return a;
}

Complex operator*(const Complex& a, const Complex& b)
{
    return Complex(a.real * b.real, a.image * b.image);
}

Complex& operator*=(Complex& a, const Complex& b)
{
    a.real *= b.real;
    a.image *= b.image;
    return a;
}

Complex operator/(const Complex& a, const Complex& b)
{
    return Complex(a.real / b.real, a.image / b.image);
}

Complex& operator/=(Complex& a, const Complex& b)
{
    a.real /= b.real;
    a.image /= b.image;
    return a;
}