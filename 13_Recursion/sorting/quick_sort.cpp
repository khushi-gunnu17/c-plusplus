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

    // correct index of pivot 
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // See left and right part that they are sorted or not , if not sort it
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot)  {
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

    // Let's partition
    int p = partition(arr, start, end);

    // left part sorting
    quickSort(arr, start, p-1);

    // right part sorting
    quickSort(arr, p+1, end);

    return;
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

// Time complexity 
// best case = O(nlogn)
// Worst case = O(n square) // O of n sqaure
// average case = O(nlogn)


// In - place sorting technique ??
/*
Yes, QuickSort is an in-place sorting algorithm. An in-place sorting 
algorithm is one that doesn't require additional memory space to 
perform the sorting operation and instead operates directly on the 
input data structure. QuickSort achieves this by partitioning the input 
array and then recursively sorting the subarrays without the need for 
additional memory.
*/


// stable algorithm ??
/*
QuickSort, as originally designed by Tony Hoare, does not guarantee the 
preservation of the relative order of equal elements. During the 
partitioning step, the algorithm may swap elements that are equal, 
leading to a loss of stability. However, there are variations and 
optimizations of QuickSort that can be modified to make it stable, but 
the standard or basic implementation is usually unstable.

*/