#pragma once
#include <string>
#include <iostream>

class rectangle {
    private:
        float length;
        float width;
    
    public:
    //default constructors
        rectangle();
        ~rectangle();
        rectangle(float newlength, float newwidth);         //overloaded constructor

    
        
        void setlength(float newlength);    //setter
        float getlength() const;      //getter
    
        void setwidth(float newwidth);      //setter
        float getwidth() const;       //getter
    
        float calculatearea() const;
    
    };