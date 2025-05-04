#include <iostream>
#include "rectangle.h"
#include "triangle.h"

using namespace std;

int main() {
     rectangle rect;
     triangle trgl;
     polygon* ppoly1 = &rect;
     polygon* ppoly2 = &trgl;
     ppoly1->setvalues(4,5);
     ppoly2->setvalues(4,5);

     cout<<rect.area()<<" \n";
     cout<<trgl.area()<<" \n";

     return 0;
}