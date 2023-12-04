#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

// dutch national flag algorithm

void sort012(int arr[], int size) {
    int low = 0 , high = size - 1 , mid = 0;
    // mid represents the current element under consideration.

    while(mid <= high) {
        switch (arr[mid]) {
            case 0 : 
                swap(arr[low], arr[mid]);
                ++low;
                ++mid;
                break;

            case 1 : 
                ++mid;
                break;

            case 2 : 
                swap(arr[mid], arr[high]);
                --high;
                break;
        }
    }
}

void printArray(int arr[], int size) {
    for(int i=0 ; i<size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int nums[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Original Array : ";
    printArray(nums, size);

    sort012(nums, size);

    cout << "Sorted Array : ";
    printArray(nums, size);

    return 0;
}