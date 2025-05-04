#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main() {
    
    person jane = person("jane", 60.0f);
    person john = person("john", 75.0f);

    float totalweight = jane + john;

    if (jane == john) {
        cout<<"this is the same person" <<endl;   
    }
    if ( jane != john) {
        cout<<"this is NOT the same person"<<endl;
    }
    if (jane < john) {
        cout<<"jane is younger than john"<<endl;
    }
    if (john > jane) {
        cout<<"john is older than jane" <<endl;
    }
    int johnage = john;
    cout<<"john's age: "<<johnage<<endl;
    cout<<"total weight: "<<totalweight<<endl;

    string janefirstname = jane;
    cout<<"jane's firstname"<<janefirstname<<endl;

    float janeweight = jane;
    cout<<"jane's weight"<<janeweight<<endl;
    return 0;
}