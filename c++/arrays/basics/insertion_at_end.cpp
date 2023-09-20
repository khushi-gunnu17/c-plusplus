#include <iostream>
using namespace std;

int insertSorted(int arr[], int n, int key, int capacity) {
    // Cannot insert more elements if n is already more than or equal to capacity.

    if(n >= capacity) {
        return n;
    }

    arr[n] = key;

    return (n + 1);
}

int main() {
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int key = 26;

    cout << "Before insertion : " << endl;
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }

    // Inserting key
    n = insertSorted(arr, n, key, capacity);

    cout << "After Insertion : " << endl;
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}