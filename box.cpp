

#include "box.h"

box::box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

box::box( const double newlength, const double newbreadth, const double newheight){
    length = newlength;
    breadth = newbreadth;
    height = newheight;
}

box::~box(){

}
double box::getvolume() {
    return length*breadth*height;
}
void box::setlength(double len) {
    length = len;
}
void box::setbreadth(double bre) {
    breadth = bre;
}
void box::setheight(double hei) {
    height = hei;
}
//overload + operator to add two box object.
box box::operator+(const box& b) {
    box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}