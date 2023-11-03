#pragma once
#include "Steelsheet.h"

class Rectangle :  public Steelsheet
{
	double a;
	double b;
public:
	Rectangle();
	Rectangle(double a, double b);
	~Rectangle();
	void display() const override;
	double areaSheet() const override;
	double weightSheet() const override;
};

