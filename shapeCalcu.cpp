#include <iostream>
#include <string>
using namespace std;

int square (int a, int b);
int rectangle ( int a, int b);
int triangle ( int a, int b);

int main() {
    cout<<"please select the area of the shape to calculate "<<endl;
    cout<<"1. square"<<endl;
    cout<<"2. rectangle"<<endl;
    cout<<"3. triangle"<<endl;
    cout<<"4. quit program"<<endl<<endl;
    cout<<"enter selection: "<<endl;



    int number;
    cin>>number;
    if(number == 1){
        int length, width;
        cout<<"enter length of the square: "<<endl;
        cin>>length;
        cout<<"enter width of the square: "<<endl;
        cin>>width;
        int calculation = square(length, width);
        cout<<"the area of the square is: "<<calculation<<endl;
        cout<<"\n";
        cout<<"please select the area of the shape to calculate "<<endl;
        cout<<"1. square"<<endl;
        cout<<"2. rectangle"<<endl;
        cout<<"3. triangle"<<endl;
        cout<<"4. quit program"<<endl<<endl;
        cout<<"enter selection: "<<endl;
        cin>>number;

    }
    else if (number == 2) {
        int length, breadth;
        cout<<"enter length of the rectangle: "<<endl;
        cin>>length;
        cout<<"enter another length of the rectangle: "<<endl;
        cin>>breadth;
        int calculation = rectangle(length, breadth);
        cout<<"the area of the rectangle is: "<<calculation<<endl;
        cout<<"\n";
        cout<<"please select the area of the shape to calculate "<<endl;
        cout<<"1. square"<<endl;
        cout<<"2. rectangle"<<endl;
        cout<<"3. triangle"<<endl;
        cout<<"4. quit program"<<endl<<endl;
        cout<<"enter selection: "<<endl;
        cin>>number;

    }
    else if ( number == 3) {
        int base, height;
        cout<<"enter base of the triangle: "<<endl;
        cin>>base;
        cout<<"enter height of the tringle: "<<endl;
        cin>>height;
        double calculation = triangle(base, height);
        cout<<"the area of the square is: "<<calculation<<endl;
        cout<<"\n";
        cout<<"please select the area of the shape to calculate "<<endl;
        cout<<"1. square"<<endl;
        cout<<"2. rectangle"<<endl;
        cout<<"3. triangle"<<endl;
        cout<<"4. quit program"<<endl<<endl;
        cout<<"enter selection: "<<endl;
        cin>>number;
    } 
    else if (number == 4) {
        cout<<" "<<endl;
    }
    else {
        cout<<"your input was: "<<number<<" which is an invalid input"<<endl;
        cout<<"please enter a valid input!!! \n \n"<<endl;

        cout<<"please select the area of the shape to calculate "<<endl;
        cout<<"1. square"<<endl;
        cout<<"2. rectangle"<<endl;
        cout<<"3. triangle"<<endl;
        cout<<"4. quit program"<<endl<<endl;
        cout<<"enter selection: "<<endl;
        cin>>number;
    } 
return 0;
}
int square (int a, int b) {
    int result = a * b;
    return result;
}
int rectangle ( int a, int b) {
    int result = a * b;
    return result;
}
int triangle ( int a, int b){
    int result = ((a*b)/2);
    return result;
} 
