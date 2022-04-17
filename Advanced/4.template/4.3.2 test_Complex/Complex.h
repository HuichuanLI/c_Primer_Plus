#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
using namespace std;

class Complex
{
public:
	Complex(double r = 0, double i = 0);
	Complex(const Complex &c);
	~Complex();

	Complex& operator=(const Complex& c);

	Complex& operator++();	// 前置 ++
	Complex operator++(int);	// 后置 ++
	Complex& operator--();	// 前置 --
	Complex operator--(int);	// 后置 --
	Complex& operator-();

	
	friend ostream& operator<<(ostream& out, const Complex& c);

	friend Complex operator+(const Complex& a, const Complex& c);
	friend Complex& operator+=(Complex& a, const Complex& c);

	friend Complex operator-(const Complex& a, const Complex& b);
	friend Complex& operator-=(Complex& a, const Complex& b);
	
	friend Complex operator*(const Complex& a, const Complex& b);
	friend Complex& operator*=(Complex& a, const Complex& b);
	
	friend Complex operator/(const Complex& a, const Complex& b);
	friend Complex& operator/=(Complex& a, const Complex& b);	
	
private:
	double real;
	double image;
};

#endif // COMPLEX_H