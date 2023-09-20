#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i=1 ; i<n ; i++) {
        for(int j=0 ; j< n-i ; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }      
        }
    }
    return;
}

void printArray(int arr[], int n) {
    for(int i = 0 ; i<n ; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int array[] = {2, 6, 4, 9, 7, 3, 1};
    int n = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, n);
    cout << "The sorted array is : " << endl;
    printArray(array, n);
    return 0;
}