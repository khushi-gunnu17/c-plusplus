#include <iostream>
using namespace std;

int insertSorted(int arr[], int n, int num, int capacity) {
    // Cannot insert more elements if n is already more than or equal to capacity.

    if(n >= capacity) {
        return n;
    }

    arr[n] = num;

    return (n + 1);
}

int main() {
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr) / sizeof(arr[0]);        // 20
    int n = 6;
    int num = 26;

    cout << "Before insertion : " << endl;

    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    // Inserting number at the end 
    n = insertSorted(arr, n, num, capacity);

    cout << "\nAfter Insertion : " << endl;
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}