#include "RightAngled_.h"
#include <iostream>
#include <cmath>
#define PI 3.1415926535

using namespace std;

void RightAngled_::Init(RightAngled_::Triangle triangle)
{
	triangle.setC(sqrt(triangle.getA() * triangle.getA() + triangle.getB() * triangle.getB()));
	setTriangle(triangle);
	setArea(this->calcArea());
}
void RightAngled_::Read()
{
	RightAngled_::Triangle t;
	cout << endl;
	cout << "Triangle : " << endl;
	t.Read();
	this->Init(t);
}

void RightAngled_::Display() const
{
	cout << endl;
	cout << "triangle :" << endl;
	triangle.Display();
	cout << "area = " << getArea() << endl;
}

double RightAngled_::calcArea()
{
	double p = triangle.perimeter() / 2;
	return sqrt(p * (p - triangle.getA()) * (p - triangle.getB()) * (p - triangle.getC()));
}
void RightAngled_::Triangle::Init(int a, int b, int c)
{
	setA(a);
	setB(b);
	setC(c);
}
void RightAngled_::Triangle::Display() const
{
	cout << endl;
	cout << "side1 = " << a << endl;
	cout << "side2 = " << b << endl;
	cout << "side3 = = " << c << endl;
	cout << endl;
}
void RightAngled_::Triangle::Read()
{
	int a, b, c;
	cout << endl;
	cout << "side1 = "; cin >> a;
	cout << "side2 = "; cin >> b;
	cout << "side3 = "; cin >> c;
	Init(a, b, c);
}
int RightAngled_::Triangle::perimeter()
{
	return getA() + getB() + getC();
}
double RightAngled_::Triangle::AngleA()
{
	return (acos(((b * b) + (c * c) - (a * a)) / (2 * b * c))) * 180 / PI;
}
double RightAngled_::Triangle::AngleB()
{
	return (acos(((a * a) + (c * c) - (b * b)) / (2. * a * c))) * 180 / PI;
}
double RightAngled_::Triangle::AngleC()
{
	return (acos(((a * a) + (b * b) - (c * c)) / (2. * a * b))) * 180 / PI;
}