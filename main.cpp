#include <iostream>
#include "shapes.h"

using namespace std;
int main() {
     int length, width, base, height, radius;
     shapes::square shape1;
     shapes::triangle shape2;
     shapes::circle shape3;

     shape1 = shapes::square(length, width);
     shape2 = shapes::triangle(height, base);
     shape3 = shapes::circle(radius);

int choice;
do {
     cout<<" 1. calculate the area of a square. "<<endl;
     cout<<" 2. calculate the area of a triangle. "<<endl;
     cout<<" 3. calculate the area of a circle. "<<endl;
     cout<<" 4. quit"<<endl;

     if (choice == 1) {
      cout<<" 1. calculate the area of a square. "<<endl;
      cout<<"enter the side length: ";
      cin>>length;
      cout<<"enter another side length: ";
      cin>>width;
      cout<<"the area of the square is: "<<shapes::area::areaofsquare();
        
     }

     else if(choice == 2) {
          cout<<" 1. calculate the area of a triangle. "<<endl;
      cout<<"enter the height of the triangle: ";
      cin>>length;
      cout<<"enter the base of the triangle: ";
      cin>>width;
      cout<<"the area of the square is: "<<shapes::area::areaoftriangle();
     }
     else if (choice == 3) {
          cout<<" 1. calculate the area of a circle. "<<endl;
          cout<<"enter the radius of the circle: ";
          cin>>length;
          cout<<"the area of the circle is: "<<shapes::area::areaofcircle();
     }
     else {
          
     }
} while (choice != 4);

return 0;
     
}