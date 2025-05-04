#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    fstream myfile;
    //create and open a text file
    ofstream("example.txt");
    myfile<<"this is advanced computer programming";
    //close file 
    myfile.close();

    return 0;

}