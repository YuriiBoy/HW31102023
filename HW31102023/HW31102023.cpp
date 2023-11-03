#include "Header.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
	double a = 0;
	double w = 0;
	int n = 15;
	Steelsheet** steels = new Steelsheet * [n] {
		new Square(1.2),
			new Square(0.8),
			new Square(0.55),
			new Square(1.34),
			new Square(0.95),
			new Rectangle(1.7, 1.1),
			new Rectangle(0.7, 0.4),
			new Rectangle(0.5, 0.4),
			new Rectangle(0.33, 0.41),
			new Rectangle(0.7, 0.9),
			new Rectangle(0.6, 0.8),
			new Rectangle(1.3, 0.9),
			new Triangle(1.5, 0.9),
			new Triangle(0.9, 0.8),
			new Triangle(1.2, 1.3)
	};
	for (int i = 0; i < n; i++) {
		steels[i]->display();
		a += steels[i]->areaSheet();
		w += steels[i]->weightSheet();
	}

	cout << endl;
	cout << " General array s = " << a << " m2" << endl;
	cout << " General weight w = " << w << " kg" << endl;

	for (int i = 0; i < n; i++) {
		delete steels[i];
	}
	delete steels;

}

