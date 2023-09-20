#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return;
}

//optimized solution

// void bubbleSort(int arr[], int n) {
//     for(int i=1 ; i<n ; i++) {
//         bool swapped = false;
//         for(int j=0 ; j<n-i ; j++) {
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j] , arr[j+1]);
//                 swapped = true;
//             }
//             if(swapped == false) {
//                 break;
//             }
//         }
//     }
//     return;
// }

// In ascending order
// void printArray(int arr[], int n) {
//     for(int i = 0 ; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     return;
// }

// in decreasing order
void printArray(int arr[], int n) {
    for(int i = n-1 ; i>=0; i--) {
        cout << arr[i] << " ";
    }
    return;
}

int main () {
    int arr[5] = {4, 1, 3, 9, 7};
    int n = 5;

    bubbleSort(arr, n);
    cout << "The sorted array is : ";
    printArray(arr, n);
    
    cout << endl;
    return 0;
}

// Time Complexity = O(n square 2);
    // best case = already sorted O(n)
    // worst case = O(n square 2) - reverse sorted

// Space Complexity = O(1);

//stable or unstable ??

// in- place sort ?

// quiz of bubble sort in the video // Do it
