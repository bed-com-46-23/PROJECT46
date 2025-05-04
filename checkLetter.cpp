#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string array[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(array) / sizeof(array[0]); //number of words in an array
    int frequency[26] = {0}; // array that check the first letter

    for ( int i = 0; i < size; i++) {
        if (array[i][0] == 'B' || array[i][0] == 'b') {
            cout<<array[i]<<endl;
        }
        }
        return 0;
    }
    