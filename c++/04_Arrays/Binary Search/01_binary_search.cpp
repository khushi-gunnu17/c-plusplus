#include <iostream>
using namespace std;

// Binary search is only applied on the monotonic functions.
// it gives the searched index for the array.

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start<=end) {

        if(arr[mid] == key) {
            return mid;
        }

        // going to the right part
        if(arr[mid] < key) {
            start = mid + 1;
        }
        // going to the left part
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;      // mid updated here coz of start and end updation.
    }

    return -1;   // showcasing Value not present 
}

int main() {
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,4,12,9};
    
    int indexEven = binarySearch(even, 6, 12);
    int indexOdd = binarySearch(odd, 5, 3); 
    
    cout << "Index of 12 is = " << indexEven << endl;
    cout << "Index of 3 is = " << indexOdd << endl;

    return 0;
}

// Time complexity = O(log n)
// Space complexity = O(1)