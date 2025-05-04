#include <iostream>
using namespace std;

int main() {
    int* num = nullptr;
    num = new int;

    char* word = nullptr;
    word = new char[20];

    cout <<"enter an integer" <<endl;
    cin >> *num;
    cout<<"enter a word"<<endl;
    cin >> *word;

    delete num;
    delete word;

    return 0;
    
}