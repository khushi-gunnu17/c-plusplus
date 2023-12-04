// Write an efficient program for printing K largest elemnts in an array. Elements in an array can be in any order.

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

void largestElements(int arr[], int n, int k) {
    bubbleSort(arr, n);

    // printing the first Kth largest elements  
    for(int i = n-1 ; i>k; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    largestElements(arr, n, k);

    return 0;
}