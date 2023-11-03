#pragma once
class Steelsheet

{
protected:
	string name;
	double thick;
	int density;
public:
	Steelsheet();
	Steelsheet(string name, double thick, double density);
	~Steelsheet();
	virtual void display() const;
	virtual double areaSheet() const = 0;
	virtual double weightSheet() const = 0;
};

