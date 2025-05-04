#include <iostream>
#include <string>
using namespace std;

int main() {
   int number;
   bool validinput = false;
   while (!validinput) {
    cout<<"enter the value between 5 and 10: "<<endl;

    if (cin >> number) {
        if (number >= 5 && number <= 10) {
            validinput = true;
        } else if( number < 5 && number > 10) {
            cout<<"you entered "<<number<<". please enter a number between 5 and 10."<<endl;
        }
        else{
            cout<<"sorry, you entered an invalid number, please try again"<<endl;
        }
    }
   }
   cout<<"your input value("<<number<<") has been accepted"<<endl;
   return 0;
    
}