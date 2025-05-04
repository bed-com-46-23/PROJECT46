
#include <iostream>
#include "rectangle.h"
using namespace std;

rectangle::rectangle() {
    length = 0.0f;
    width = 0.0f;
}
rectangle::~rectangle() {

}
rectangle::rectangle(float newlength, float newwidth) {
    length = newlength;
    width = newwidth;

    if (newlength <= 0 || newwidth <=0) {
        cout<<"invalid length and width";
    }
}

void rectangle::setlength(float newlength) {
    if (newlength > 0) {
        length = newlength;
    }
    else {
        cout<<"invalid lenght"<<endl;
    }
} 
void rectangle::setwidth( float newwidth) {
    if ( newwidth > 0) {
        width = newwidth;
    }
    else {
        cout<<"invalid width"<<endl;
    }
}
float rectangle::getlength() const {
    return length;
}
float rectangle:: getwidth() const {
    return width;
}
float rectangle::calculatearea() const {
    return length * width;
}

