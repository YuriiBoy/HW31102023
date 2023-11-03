#pragma once
#include "Steelsheet.h"

class Triangle : public Steelsheet
{
	double a;
	double b;
public:
	Triangle();
	Triangle(double a, double b);
	~Triangle();
	void display() const override;
	double areaSheet() const override;
	double weightSheet() const override;
};

