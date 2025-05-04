#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //create and open at text file 
    ofstream Myfile ("exampleFile.txt");
    
    // Close the file 
    Myfile.close();

    return 0;
}