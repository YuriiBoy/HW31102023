#include "Header.h"
#include "Square.h"

Square::Square() : Steelsheet(), side (0)
{}

Square::Square(double side) : Steelsheet("Square", thick, density), side(side)
{}

Square::~Square()
{}

void Square::display() const
{
	Steelsheet::display();
	cout << "\n Side lenth of sheet: " << side << " m" << endl;
	cout << " Area of sheet: " << areaSheet() << " m2" << endl;
	cout << " Weight of sheet: " << weightSheet() << " kg" << endl;
}

double Square::areaSheet() const
{
	return side * side;
}

double Square::weightSheet() const
{
	return areaSheet() * thick * density / 100;
}
