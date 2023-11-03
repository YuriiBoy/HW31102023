#include "Header.h"
#include "Rectangle.h"

Rectangle::Rectangle() : Steelsheet(), a(0.0), b(0.0)
{}

Rectangle::Rectangle(double a, double b)
	: Steelsheet("Rectangle", thick, density), a(a), b(b)
{}

Rectangle::~Rectangle()
{}

void Rectangle::display() const
{
	Steelsheet::display();
	cout << "\n Sides lenth of sheet: " << a << " and " << b << " m" << endl;
	cout << " Area of sheet: " << fixed << setprecision(2) <<  areaSheet() << " m2" << endl;
	cout << " Weight of sheet: " << fixed << setprecision(2) << weightSheet() << " kg" << endl;
}

double Rectangle::areaSheet() const
{
	return a * b;
}

double Rectangle::weightSheet() const
{
	return areaSheet() * thick * density / 100;
}
