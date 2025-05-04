#include <iostream>
#include <string>
#include "person.h"
using namespace std;

person::operator int(){
    return mage;
}
person::operator string() {
    return mfirstname;
}
person::operator float() {
    return mweight;
}
person::person() {
    mweight = 0.0f;
    mfirstname = "default";
    mage = 0;
}
person::person(float newweight) {
    mweight = newweight;
}

person::~person() {

}
//overload the add operator
float person::operator + (const person& otherperson){
    return this->mweight + otherperson.mweight;
}
//overload the equal to operator
bool person::operator==(const person& otherperson) {
    return mfirstname == otherperson.mfirstname;
}
// overload the not equal to operator
bool person::operator!=(const person& otherperson) {
    return mfirstname != otherperson.mfirstname;
}
//overload the less than operator
bool person::operator<(const person& otherperson) {
    return mage < otherperson.mage;
}
bool person::operator > (const person& otherperson) {
    return mage > otherperson.mage;
}

