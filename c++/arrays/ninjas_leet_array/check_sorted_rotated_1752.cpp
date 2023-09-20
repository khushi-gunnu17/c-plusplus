#include <iostream>
using namespace std;

bool checkRotatedSorted(int arr[], int n) {
    int count = 0;

    for(int i=1; i<n ; i++) {
        if(arr[i-1] > arr[i]) {
            count++;
        }
    }

    if(arr[n-1] > arr[0]) {
            count++;
    }

    return count<=1;
}


int main() {

    int arr[5] = {5, 8, 9, 1, 2};

    int ans = checkRotatedSorted(arr, 5);
    cout << " Is the array sorted and rotated = " << ans << endl;

    return 0;
}