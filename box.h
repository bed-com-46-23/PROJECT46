#pragma once

#include <iostream>
using namespace std;

class box {
    public:

    box();
    box(const double newlength, const double newbreadth, const double newheight);

    ~box();
    double getvolume();
    void setlength(double len);
    void setbreadth(double bre);
    void setheight(double hei);

    //overload + operator to add two box object.
    box operator+(const box& b);

private:
    double length;    //length of the box
    double breadth;    //breadth of a box
    double height;     //height of a box
};