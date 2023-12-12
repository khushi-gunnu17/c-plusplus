#include <iostream>
using namespace std;

// Rightmost argument should be made default first always, if you want to make more arguments as default.
void print(int arr[], int n, int start = 0, int end = 0) {   // Default arguments - Optional
    for(int i = start; i<n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[5] = {1,3,5,6,8};
    print(arr, 5);

    print(arr, 5, 2);       // Argument optional
    return 0;
}

// HW = constant variable 