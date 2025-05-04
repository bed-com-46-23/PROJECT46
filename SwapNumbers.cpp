#include <iostream>
using namespace std;
 
void swapnumbers(int* num1, int* num2);
int main() {
    int varA = 25;
    int varB = 100;

    cout<<"varA before swap: "<<varA<<endl; //varA is 25
    cout<<"varB before swap: "<<varB<<endl; //varB is 100

    swapnumbers(&varA, &varB);

    cout<<"varA after swap: "<<varA<<endl;
    cout<<"varB after swap: "<<varB<<endl;

    return 0;
}
void swapnumbers(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}