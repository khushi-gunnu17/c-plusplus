#include <iostream>
#include <math.h>
using namespace std;

void findDuplicates(int arr[], int n) {
    for(int i=0 ; i<n ; i++) {
        int index = abs(arr[i]) - 1;

        if(arr[index] < 0) {
            // if the element at the calculated index is negative, it means that we have seen it before.
            // Print it as a duplicate.
            cout << index + 1 << " ";
        } else {
            // Mark the element as visited by negating it.
            arr[index] = -arr[index];
        }
    }
    return;
}

int main() {

    int nums[] = {4, 3, 2, 7, 8, 2, 1, 1};
    int size = sizeof(nums)/sizeof(nums[0]);

    cout << "Duplicates are : ";
    findDuplicates(nums, size);

    return 0;
}