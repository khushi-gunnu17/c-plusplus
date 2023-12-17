#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "the size of the array is : " << n << endl;

    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool linearSearch(int arr[], int size, int key) {
    printArray(arr, size);
    // Base case
    if(size == 0) {
        return false;
    }

    if(arr[0] == key) {
        return true;
    } 
    else {
        bool remainingPArt = linearSearch(arr + 1, size - 1 , key);
        return remainingPArt;
    }
}

int main() {
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 6;
    bool ans = linearSearch(arr, size , key);
    cout << ans << endl;

    if(linearSearch) {
        cout << "the key is found." << endl;
    } else {
        cout << "The key is not found." << endl;
    }
    return 0;
}