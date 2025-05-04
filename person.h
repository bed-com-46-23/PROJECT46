#pragma once
#include <string>

using namespace std;

class person {
public:
    person();
    operator int();
    operator string();
    operator float();
    
    person(float newweight);
    person(string firstname, float weight);
    
    ~person();
    //overload the add operator
    float operator + (const person& otherperson);
    bool operator == (const person& otherperson);
    bool operator != (const person& otherperson);
    bool operator < (const person& otherperson);
    bool operator > (const person& otherperson);
    

private:
    float mweight;
    string mfirstname;
    int mage;
};