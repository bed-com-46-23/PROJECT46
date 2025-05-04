#include <iostream>
#include "box.h"
using namespace std;

//main function for the program
int main() {
    box box1; //declare box1 of type box
    box box2; //declare box2 of the type box
    box box3; //declare box3 of the type
    double volume = 0.0; //store the volume of the box here

    // box 1 specification
    box1.setlength(6.0);
    box1.setbreadth(7.0);
    box1.setheight(5.0);

    //box 2 specification
    box2.setlength(12.0);
    box2.setbreadth(13.0);
    box2.setheight(10.0);

    //volume of box 1
    volume = box1.getvolume();
    cout<<"volume of box1 : "<<volume<<endl;

    //volume of box 2
    volume = box2.getvolume();
    cout<<"volume of box2 : "<<volume<<endl;

    //add two object as follows:
    box3 = box1 + box2;

    //volume of box 3
    volume = box3.getvolume();
    cout<<"volume of box3 : "<<volume<<endl;

    return 0;

}