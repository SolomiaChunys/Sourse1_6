#pragma once
#include <string>

using namespace std;

class RightAngled_
{
private:
	double area;

	class Triangle
	{
	private:
		int a, b, c;
	public:
		int getA() const { return a; }
		int getB() const { return b; }
		int getC() const { return c; }

		void setA(int a) { this->a = a; }
		void setB(int b) { this->b = b; }
		void setC(int c) { this->c = c; }

		void Init(int a, int b, int c);
		void Display() const;
		void Read();


		int perimeter();
		double AngleA();
		double AngleB();
		double AngleC();
	};
	Triangle triangle;
public:
	double getArea()const { return area; }
	RightAngled_::Triangle getTriangle() const { return triangle; }

	void setArea(double area) { this->area = area; }
	void setTriangle(RightAngled_::Triangle triangle) { this->triangle = triangle; }

	void Init(RightAngled_::Triangle triangle);
	void Display() const;
	void Read();

	double calcArea();
};

