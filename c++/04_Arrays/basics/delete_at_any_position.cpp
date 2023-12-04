#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// Function to implement search operation
int findIndex(int arr[], int n, int num) {
    for(int i=0 ; i<n ; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

// Function to delete an element 
int deleteElement(int arr[], int n, int num) {
    // Find position of element to be deleted
    int pos = findIndex(arr, n, num);

    if(pos == -1) {
        cout << "Element not found" << endl;
        return n;
    }

    // Deleting element 
    for(int i = pos ; i < n-1 ; i++) {
        arr[i] = arr[i+1];
    }
    return n-1;
}

void printArray(int arr[], int n) {
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[] = {10, 50, 30, 40, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 30;       // number to be deleted 

    cout << "Array before deletion : " << endl;
    printArray(arr, n);

    // Function call
    n = deleteElement(arr, n, num);

    cout << "Array after deletion : " << endl;
    printArray(arr, n);

    return 0;
}
