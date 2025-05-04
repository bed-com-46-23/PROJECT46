#include <iostream>
using namespace std;

int main() {
    //declare pointers and initialize it
    //so that it does store a random address
    int* pPointer = nullptr;

    int integervar = 5;

    //assign pointer to address of an object
    pPointer = &integervar;

    //output the value of integervar
    cout<<"integervar: "<<integervar<<endl;

    //output the address of integervar
    cout<<"address of integervar"<<&integervar<<endl;

    //output the address assigned to pPointer
    cout<<"pPointer: "<<pPointer<<endl;

    //output the address of pPointer
    cout<<"address of pPointer"<<&pPointer<<endl;

    return 0;
}