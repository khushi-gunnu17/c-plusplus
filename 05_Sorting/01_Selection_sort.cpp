#include <iostream>
using namespace std;

// in ascending order
void selectionSort(int arr[], int n) {
    for(int i=0 ; i<n-1 ; i++) {            // because only n-1 rounds here
        int minIndex = i;
        
        for(int j=i+1 ; j<n ; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    return;
}

// In descending order             
// void selectionSort(int arr[], int n) {
//     for(int i=0 ; i<n-1 ; i++) {
//         int maxIndex = i;
//         for(int j = i+1 ; j<n ; j++) {
//             if(arr[j] > arr[maxIndex]) {
//                 maxIndex = j;
//             }
//         }
//         swap(arr[maxIndex], arr[i]);
//     }
//     return;
// }

void printArray(int arr[], int n) {
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    return;
}

int main () {
    int arr[6] = {2 , 1 ,5 , 3 , 9 , 6};

    selectionSort(arr, 6);
    cout << "The sorted array is : " ;
    printArray(arr, 6);
    
    cout << endl;
    return 0;
}


// Space Complexity = O(1);

// Time Complexity = O(n square 2);
    // best case = already sorted , O(n square 2)
    // worst case = O(n square 2)

// Use case
    // small array size, where there is memory constraint.


/*
HW =
--> flowchart
--> stable or unsatble algorithm  // Order preserve ?
*/


/*
The selection sort algorithm is generally considered unstable. Stability in 
sorting algorithms refers to the preservation of the relative order of equal 
elements in the sorted output. If a sorting algorithm is stable, it means 
that if two elements have equal keys in the original data, their relative 
order will be maintained in the sorted output.

Stable sorting algorithms include insertion sort, bubble sort, merge sort,
and others, where equal elements are guaranteed to maintain their order in 
the sorted output. 
*/