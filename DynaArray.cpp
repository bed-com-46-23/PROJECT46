#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    //get the number of rows from the user
    cout<<"enter the number of rows (1-3): "<<endl;
    cin>>rows;

    if  (rows < 1 || rows > 3) {
        cout<<"number of rows must be between 1 and 3"<<endl;
        rows = 3;
    }
    //get the number of columns from the user
    cout<<"enter the number of columns from 1 to 3: ";
    cin>>columns;
    if (columns < 1 || columns > 3) {
        cout<<"the number of columns must be between 1 and 3"<<endl;
        columns = 3;
    } 
    //dynamic allocation of the 2 dimension array
    double** array = new double*[rows];
    for (int i=0; i<rows; i++) {
        array[i] = new double[columns];
    }
    //assign the values to each element of the 2 dimension array from the user
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cout<<"enter the values for the rows "<<i+1<<", columns "<<j+1<<": ";
            cin>>array[i][j];
        }
    }
    //outputting the values of each element
    cout<<"you entered the following 2d array "<<endl;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    //deallocationg the 2d array
    for (int i=0; i<rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}