// merge sort works the fastest in all of the three
// There are two ways of doing that,
//  1. -> Create new array and copy values
//  2. -> Use indexes to sort

#include <iostream>
using namespace std;

void merge(int *arr, int start, int end) {
    int mid = start + (end - start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Creating two arrays 
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values in the newly created arrays 
    int mainArrayIndex = start;
    for(int i=0 ; i<len1 ; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i=0 ; i<len2 ; i++) {
        second[i] = arr[mainArrayIndex++];
    }


    // Merge two sorted arrays 
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2) {         // the sorting takes place here 
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++]; 
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements 
    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int start, int end) {
    // Base case 
    if(start >= end) {
        return;
    }
    int mid = start + (end - start)/2;

    // Left part sorting
    mergeSort(arr, start, mid);

    // Right part Sorting
    mergeSort(arr, mid+1, end);

    // merge the two arrays
    merge(arr, start, end);
}

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    mergeSort(arr, 0, n-1);     // array, start, end 

    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

// Space complexity = O(n).
// Time complexity = O(nlogn).

// HW = inversion count, Use indexex to solve this question 

// Applications for merge sort 
// in GFG