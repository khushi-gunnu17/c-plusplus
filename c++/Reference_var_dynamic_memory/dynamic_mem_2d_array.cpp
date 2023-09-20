// How to create a 2d array dynamically
#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    // Creating a 2D array
    int **arr = new int*[row];

    for(int i = 0; i<row ; i++) {
        arr[i] = new int[col];
    }

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

    for(int i=0; i<row ; i++) {
        delete [] arr[i];
    }

    delete []arr;
    return 0;
}

// reference = code - studio

// Homework - Create jaggered array dynamically