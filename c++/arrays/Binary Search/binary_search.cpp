#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2; 

    while(start<=end) {

        if(arr[mid] == key) {
            return mid;
        }

        //Go to right part
        if(arr[mid] < key) {
            start = mid + 1;
        }
        // Go to left part 
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1; 
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


