#include <iostream>
using namespace std;

int main() {
    // Number of rows 
    int rows = 3;

    // Create an array of pointers to int arrays
    int **jaggedArray = new int*[rows];

    // Number of columns for each row (you can set these differently for each row.)
    int columnsForRow0 = 4;
    int columnsForRow1 = 3;
    int columnsForRow2 = 5;

    // Allocate memory for each row.
    jaggedArray[0] = new int[columnsForRow0];
    jaggedArray[1] = new int[columnsForRow1];
    jaggedArray[2] = new int[columnsForRow2];

    // Initialize elements (optional)
    for(int i=0 ; i<columnsForRow0 ; i++) {
        jaggedArray[0][i] = i + 1;
    }

    for(int i=0 ; i<columnsForRow1 ; i++) {
        jaggedArray[1][i] = (i + 1) * 2;
    }

    for(int i=0 ; i<columnsForRow2 ; i++) {
        jaggedArray[2][i] = (i + 1) * 3;
    }

    // Accessing elements
    cout << "jaggedArray[0][2] : " << jaggedArray[0][2] << endl;


    // Printing the array 
    for(int i=0 ; i<rows ; i++) {
        for(int j=0 ; j < (i==0 ? columnsForRow0 : (i==1 ? columnsForRow1 : columnsForRow2)) ; j++) {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate Memory 
    for(int i=0 ; i<rows ; i++) {
        delete []jaggedArray [i];
    }
    delete []jaggedArray;
    
    return 0;
}


/*
A jagged array is an array of arrays in which the arrays can have 
different sizes. Unlike a two-dimensional (2D) array, where all rows 
have the same number of columns, a jagged array allows each row to have 
a different length. This flexibility is useful when you need to 
represent a collection of elements where the size of each group can vary.
*/