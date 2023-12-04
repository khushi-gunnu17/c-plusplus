#include <iostream>
using namespace std;

int getPivot(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start<end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1; 
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;

    int mid = start + (end - start)/2; 

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        } 
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int search(int arr[], int n, int key) {

    int pivot = getPivot(arr, n);
    if(key >= arr[pivot] && key <= arr[n-1]) {    //BS on second line 
        return binarySearch(arr, pivot , n-1, key);
    }
    else {              //BS on first line 
        return binarySearch(arr, 0, pivot - 1, key);
    }
    return -1;
}

int main() {
    
    int nums[] = {7, 8, 9, 1, 3, 5};
    int size = sizeof(nums)/sizeof(nums[0]);

    int key;
    cout << "Enter the element to be searched for : ";
    cin >> key;

    int n = search(nums, size, key);

    cout << "The index of the target element is : " << n << endl;

    return 0;
}

// Think of approaches 2 & 3  also in this question

