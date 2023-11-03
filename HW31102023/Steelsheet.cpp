#include "Header.h"
#include "Steelsheet.h"

Steelsheet::Steelsheet() : name("-"), thick(0.0), density(0)
{}

Steelsheet::Steelsheet(string name, double thick, double density)
	: name(name), thick(5.5), density (7750)
{}

Steelsheet::~Steelsheet()
{}

void Steelsheet::display() const
{
	cout << "\n Form of the sheet: "  << setw(5) << name;
	cout << "\t Thickness of sheet: " << setw(5) << thick << " mm";
	cout << "\t Density of metal: " << setw(5) << density << " kg/m3" << endl;
}
