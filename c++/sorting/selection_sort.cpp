#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i=0 ; i<n-1 ; i++) {            // because only n-1 reounds 
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

// In descending order              --> Will it work ?
// void selectionSort(int arr[], int n) {
//     for(int i = 0 ; i<n-1 ; i++) {
//         int maxIndex = i;
//         for(int j = i+1 ; j<n ; j++) {
//             if(arr[j] > maxIndex) {
//                 maxIndex = j;
//             }
//         }
//         swap(arr[maxIndex], arr[i]);
//     }
//     return;
// }

void printArray(int arr[], int n) {
    for(int i=n-1 ; i>=0 ; i--) {
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
    // best case = already sorted O(n square 2)
    // worst case = O(n square 2)

// Use case
    // small array size


/*
HW =
--> flowchart
--> stable or unsatble algorithm  // Order preserve ?
*/