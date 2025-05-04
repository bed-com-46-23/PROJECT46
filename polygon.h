#pragma once

class polygon {
protected:
     int mweidth;
     int mheight;
public:
     void setvalues(int width, int height);
     virtual int area() = 0;
     void printarea();
};