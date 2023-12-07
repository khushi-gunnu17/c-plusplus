// How 2D Array is stored in memory ??
// stored in a linear array fashion

/*
column * i + j : 
column = total no. of columns
i = row
j = col

*/

// Why do we need to specify the column size, when passing a 2D array as a parameter.

#include <iostream>
using namespace std;

void inputArray(int arr[][4], int row, int col) {
    for(int i=0 ; i<3 ; i++) {                              // row wise input
        for(int j=0; j<4 ; j++) {
            cin >> arr[i][j];
        } 
    }
}

// void inputArray(int arr[][4], int row, int col) {        // column wise input
//     for(int col=0 ; col<4 ; col++) {
//         for(int row=0 ; row<3 ; row++) {
//             cin >> arr[row][col];
//         }
//     }
// }

void printArray(int arr[][4], int row, int col) {
    for(int i=0 ; i<row ; i++) {
        for(int j=0; j<col ; j++) {
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }
}

bool isPresent(int arr[][4], int target, int rows, int cols) {
    for(int i=0 ; i<rows ; i++) {
        for(int j=0; j<4 ; j++) {

             if(arr[i][j] == target) {
                return 1;
            }
        } cout << endl;
    }
    return 0;
}

// to print row wise sum
void rowSum(int arr[][4], int rows, int cols) {
   
    for(rows=0 ; rows<3 ; rows++) {
        int sum = 0;
        for(cols=0; cols<4 ; cols++) {
            sum += arr[rows][cols];
        } cout << endl;

        cout << "Sum for "<< rows << " row is : " << sum ;
    }
}

// to print col wise sum
void colSum(int arr[][4], int rows, int cols) {
    
    for(cols=0; cols<4 ; cols++) {
        int sum = 0;
        for(rows=0 ; rows<3 ; rows++) {
            sum += arr[rows][cols];
        } cout << endl; 
        cout << "Sum for "<< cols << " col is : " << sum ;
    } 
} 

int largestRowSum(int arr[][4], int rows, int cols) {
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for(int i=0 ; i < rows ; i++) {
        int sum = 0;
        for(int j=0; j < cols ; j++) {
            sum += arr[i][j];
        } cout << endl;

        if(sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    return rowIndex;
}

int main() {
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    // int arr[3][4];

    //taking input
    // cout << "Enter the values : " << endl;
    // inputArray(arr, 3, 4);

    //taking output
    cout << "Printing the array : " << endl;
    printArray(arr, 3, 4);

    // Linear search
    cout << endl;
    cout << "Enter the element to search : ";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    // printing the sum for the rows
    rowSum(arr, 3, 4); 
    cout << endl;

    // printing the sum for the cols
    colSum(arr, 3, 4);

    cout << "The largest row sum is at index =  " << largestRowSum(arr, 3, 4) << endl;

    return 0; 
}