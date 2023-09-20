// input = arr[7] = {1,2,0,3,0,4,0};
// outpit = arr[7] = {1,2,3,4,0,0,0};

// Shifting all the non-zero elements to the left.

#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int i=0;

    for(int j=0; j<n; j++) {
        if(arr[j] != 0) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    return;
}

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