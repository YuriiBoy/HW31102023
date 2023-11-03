#include "Header.h"
#include "Triangle.h"

Triangle::Triangle() : Steelsheet(), a(0.0), b(0.0)
{}

Triangle::Triangle(double a, double b)
	: Steelsheet("Triangle", thick, density), a(a), b(b)
{}

void Triangle::display() const
{
	Steelsheet::display();
	cout << "\n Katets lenth of sheet: " << a << " and " << b << " m" << endl;
	cout << " Area of sheet: " << fixed << setprecision(2) << areaSheet() << " m2" << endl;
	cout << " Weight of sheet: " << fixed << setprecision(2) << weightSheet() << " kg" << endl;
}

double Triangle::areaSheet() const
{
	return a * b / 2;
}

double Triangle::weightSheet() const
{
	return areaSheet() * thick * density / 100;;
}
