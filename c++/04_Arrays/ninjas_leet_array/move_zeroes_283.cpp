// input = arr[7] = {1,2,0,3,0,4,0};
// outpit = arr[7] = {1,2,3,4,0,0,0};

// Shifting all the non-zero elements to the left.

#include <iostream>
using namespace std;

/*
int nonZero = 0;: This line initializes a variable named nonZero to 0.This 
variable is used to keep track of the position where the next non-zero 
element should be placed in the array.
*/

void moveZeroes(int arr[], int n) {
    int nonZero = 0;

    // shifting all non zeroes element to the left.
    for(int j=0; j<n; j++) {
        if(arr[j] != 0) {
            swap(arr[j], arr[nonZero]);
            nonZero++;
        }
    }
    return;
}

// nonZero++;: After the swap, nonZero is incremented by 1. This ensures that 
// the next non-zero element will be placed in the next position towards the 
// left in the array.

void printArray(int ans[], int n) {
    for(int i = 0; i<n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int arr[7] = {1,2,0,3,0,4,0};

    moveZeroes(arr, 7);

    printArray(arr, 7);

    return 0;
}