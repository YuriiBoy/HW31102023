#pragma once
#include "Steelsheet.h"
class Square :
    public Steelsheet
{
    double side;
public:
    Square();
    Square(double side);
    ~Square();
    void display() const override;
    double areaSheet() const override;
    double weightSheet() const override;
};

