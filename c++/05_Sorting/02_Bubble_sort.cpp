#include <iostream>
using namespace std;

// void bubbleSort(int arr[], int n) {
//     for(int i=0 ; i<n-1 ; i++) {      // coz the last element is not needed to swap after 
//         // (int i=1 ; i<n ; i++)        // // for round 1 to n-1

//         for(int j=0 ; j<n-i ; j++) {      // n-i = in this case the value of i is reducing consecutively.
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     return;
// }

//optimized solution

void bubbleSort(int arr[], int n) {
    for(int i=1 ; i<n ; i++) {          // for round 1 to n-1
        bool swapped = false;

        for(int j=0 ; j<n-i ; j++) {        // process element till n-1 th index 
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        
        if(swapped == false) {      // already sorted 
            break;
        }
    }
    return;
}

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
// - stable algorithm 

// in - place sort ? 
// yes , bubble sort is an in - place sorting algorithm.

/*
In-place sorting refers to sorting algorithms that don't require additional
memory space to be allocated for rearranging elements. In other words, the 
sorting is performed within the existing array or data structure without the 
need for additional data structures (like a new array) to hold temporary values.
In-place sorting algorithms are advantageous in situations where memory usage is a concern.
*/

// quiz of bubble sort in the video // Do it