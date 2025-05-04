#include <iostream>
using namespace std;

int main() {
    //null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign address of the first element to the pointer
    pPointer = numbersArray;

    //output the address of the first element
    cout<<"address of pPointer: "<<pPointer <<endl;
    cout<<"address of numberArray[0]: "<<numbersArray<<endl;

    //output the value of the first element using the pointer and indirection
    cout<<"value at pPointer "<<*pPointer<<endl;

    //this outputs the value of the second element
    cout<<"value at ++pPointer: "<<(++pPointer) <<endl;

    //assign the address of first element to pointer
    pPointer = numbersArray;

    //this outputs the value of the first element
    cout<<"value at pPointer++: " << *(pPointer)<<endl;

    return 0;
}