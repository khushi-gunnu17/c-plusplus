#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i=1 ; i<n ; i++) {
        int temp = arr[i];
        int j=i-1;

        for( ; j>=0 ; j--) {
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        // j will be one step before where you have to put its value.
        arr[j+1] = temp;
    }
    return;
}

void printArray (int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return;
}

int main () {
    int arr[7] = {2 , 3 , 7 , 1 , 4 , 9 , 5};

    insertionSort(arr, 7);
    cout << "the sorted array is : ";
    printArray(arr, 7);

    cout << endl;
    return 0;
}

// Use case
    //adaptable algo.
    //stable algo.

// Time Complexity = O(n square 2);
    // best case = already sorted O(n)
    // worst case = O(n square 2) - reverse sorted

// Space Complexity = O(1);