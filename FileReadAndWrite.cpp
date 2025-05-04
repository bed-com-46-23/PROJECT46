#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char data[100];
    
    //open a text file in write mide
    ofstream outfile;
     outfile.open("afile.txt");

     cout<<"writing to the file"<<endl;
     cout<<"enter your name: ";
     cin.getline(data, 100);

     //write inputted date into the text file
     outfile << data <<endl;

     cout<<"enter your age: ";
     cin>>data;
     cin.ignore();
     
     //again write an inputted data into the text file.
     outfile<<data<<endl;

     //close the open file.
     outfile.close();

     //open a text file in read mode.
     ifstream infile;
     infile.open("afile.txt");

     cout<<"reading from the file" <<endl;
     infile>>data;

     //write the data at the screen
     cout<<data<<endl;

     //again read the data from the file and display it.
     infile>>data;
     cout<<data<<endl;

     //close the opened file.
     infile.close();

     return 0;

}

