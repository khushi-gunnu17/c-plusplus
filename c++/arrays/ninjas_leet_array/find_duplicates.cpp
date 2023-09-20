#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
    cout << " Enter the elements of the array : ";
    for(int i = 0; i<n ; i++) {
        cin >> arr[i];
    }
    return;
}

void printArray(int arr[], int n) {
    for(int i = 0; i<n ; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main() {

    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << endl;

    int arr[size];

    inputArray(arr, size);
    printArray(arr, size);

    int ans = 0;

    for(int i=0; i< size ; i++) {
        ans = ans ^ arr[i];
    }

    for(int i=1 ; i<size ; i++) {
        ans = ans ^ i;
    }

    cout << ans << " ";
    cout << endl; 
    return 0;
}