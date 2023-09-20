#include <iostream>
using namespace std;

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

int largestRowSum(int arr[][4], int rows, int cols) {
    int maxi = INT64_MIN;
    int rowIndex = -1;
    for(rows=0 ; rows<3 ; rows++) {
        int sum = 0;
        for(cols=0; cols<4 ; cols++) {
            sum += arr[rows][cols];
        } cout << endl;

        if(sum > maxi) {
            maxi = sum;
            rowIndex = rows;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    return rowIndex;
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

int main() {
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    // int arr[3][4];

    //taking input
    // cout << "Enter the values : ";
    // for(int i=0 ; i<3 ; i++) {
    //     for(int j=0; j<4 ; j++) {
    //         cin >> arr[i][j];
    //     } 
    // }

    //taking output
    for(int i=0 ; i<3 ; i++) {
        for(int j=0; j<4 ; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    // Linear search
    // cout << "Enter the element to search : ";
    // int target;
    // cin >> target;

    // if(isPresent(arr, target, 3, 4)) {
    //     cout << "Element found.";
    // } else {
    //     cout << "Element not found.";
    // }

    rowSum(arr, 3, 4); 
    cout << endl;
    colSum(arr, 3, 4);

    cout << "The largest row sum is at index =  " << largestRowSum(arr, 3, 4) << endl;

    return 0; 
}