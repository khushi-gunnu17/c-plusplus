#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int &n, int x, int pos) {
    // Shifting elements to the right which are on the right side of the position
    for(int i = n-1 ; i >= pos ; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x;
    n++;
    return;
}

void printArray(int arr[], int n) {
    for(int i = 0; i<n ; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[15] = {2, 4, 1, 8, 5};
    int n = 5;

    cout << "Before insertion : ";
    printArray(arr , n);
    int x = 10, position = 2;

    // Function call
    insertElement(arr, n, x, position);

    cout << "\nAfter insertion : ";
    printArray(arr, n);

    return 0;
}