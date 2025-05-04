#pragma once
#include <string>
using namespace std;

namespace shapes {
     class square{
public:
     square();
     square(int sidelength, int squareclass);
     ~square();

private:
     int msquareclass;
     int msidelength;
     };

     class triangle{
public:
     triangle();
     triangle(int height, int base );
     ~triangle();

private:
     int mbase;
     int mheight;

     };

     class circle{
public:
     circle();
     circle(int radius);
     ~circle();

private:
     int mradius;

     };

     class area{
          public:
               static int areaofsquare(int &sidelength);
               static int areaoftriangle(int &base);
               static int areaofcircle(int &radius);
          
         
          };
}
