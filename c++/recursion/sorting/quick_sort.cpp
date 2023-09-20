#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {

    int pivot = arr[start];

    int count = 0;
    for(int i=start+1 ; i<=end ; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    // right index of pivot 
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // see left and right part 
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

        return pivotIndex;
    }
}

void quickSort(int *arr, int start, int end) {
    // Base case
    if(start >= end) {
        return;
    }

    // Let's Partition
    int p = partition(arr, start, end);

    // left part sorting
    quickSort(arr, start, p-1);

    // right part sorting
    quickSort(arr, p+1, end);
    // return;
}

int main() {
    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    quickSort(array, 0, n-1);

    for(int i=0 ; i<n ; i++) {
        cout << array[i] << " ";
    }   cout << endl;
    return 0;
}

// Space complexity = O(n)
// Time complexity = O(nlogn)
// Worst case = O(nsquare)

// HW
// In - place sorting technique ??
// stable algorithm ??