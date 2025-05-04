#include <iostream>
using namespace std;

int main() {
    int numberofelements = 0;
    int* dynamicarray = nullptr;

    cout<<"how many numbers would you like to type? ";
    cin>>numberofelements;

    dynamicarray = new int[numberofelements];
    
    if(dynamicarray == nullptr) {
        cout<<"error: memory could not be allocated";
    }
    else {
        for (int i = 0; i < numberofelements; i++){
            cout<<"enter number: ";
            cin>>dynamicarray[i];
        }
        cout << "you have entered: ";

        for (int j = 0; j < numberofelements; j++){
            cout<<dynamicarray[j] <<", ";
        }
        delete[] dynamicarray;
    }
    return 0;
}