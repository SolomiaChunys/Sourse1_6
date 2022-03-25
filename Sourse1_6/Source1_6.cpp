#include "RightAngled_.h"
#include <iostream>

using namespace std;

int main()
{
	RightAngled_ r;
	r.Read();
	r.Display();

	cout << "perimeter = " << r.getTriangle().perimeter() << endl;
	cout << "angle A :" << r.getTriangle().AngleA() << endl;
	cout << "angle B :" << r.getTriangle().AngleB() << endl;
	cout << "angle C :" << r.getTriangle().AngleC() << endl;
	
	return 0;
}