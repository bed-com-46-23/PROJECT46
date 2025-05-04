#include <iostream>
#include "shapes.h"
using namespace std;

shapes::square::square() {
     msquareclass = 0;
     msidelength = 0;
}
shapes::square::square(int sidelength, int squareclass) {
     msquareclass = squareclass;
     msidelength = sidelength;
}

shapes::triangle::triangle() {
     mheight = 0;
     mbase = 0;
}
shapes::triangle::triangle(int height, int base) {
     mheight = height;
     mbase = base;
}

shapes::circle::circle() {
     mradius = 0;
}
shapes::circle::circle(int radius) {
     mradius = radius;
}
int shapes::area::areaofsquare(int &sidelength) {
     return sidelength;
}
int shapes::area::areaoftriangle(int &base) {
     return base;
}
int shapes::area::areaofcircle(int &radius) {
     return radius;
}


