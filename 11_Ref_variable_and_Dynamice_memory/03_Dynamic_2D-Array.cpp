// How to create a 2d array dynamically
#include <iostream>
using namespace std;

int main() {
    
    int row;
    cout << "Enter the size of the row : ";
    cin >> row;

    int col;
    cout << "Enter the size of the col : ";
    cin >> col;

    // Creating a 2D array
    int **arr = new int*[row];

    for(int i = 0; i<row ; i++) {
        arr[i] = new int[col];
    }


    // taking and printing the 2D array
    for(int i = 0; i<row ; i++) {
        for(int j=0; j<col ; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<row ; i++) {
        for(int j=0; j<col ; j++) {
            cout << arr[i][j] << " ";
        }  cout << endl;
    }

    // If you are using heap, you must finally free the memory allways.

    // --> first inside columns will be deleted otherwise the memory will get leaked if we delete the statring rows i.e, int * [row].
    for(int i=0; i<row ; i++) {
        delete [] arr[i];
    }
    delete []arr;

    return 0;
}

// reference = code - studio

// Homework - Create jaggered array dynamically