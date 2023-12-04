#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {   
    int start = 0; 
    int end = size - 1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    } 
    return; 
}

void printArray(int arr[], int size) {
    for(int i=0 ;i<size; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    return;
}

int main() {
    int arr[6] = {2,4,6,8,10,-7};
    int brr[5] = {1,2,4,3,5};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}