#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size) {
    // Base case - already sorted
    if(size == 0 || size == 1) {
        return;
    }

    // One case solved - placing the largest element in the end.
    for(int i=0; i<size; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    // Recursive call
    bubbleSort(arr, size-1);
    return;
}

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubbleSort(arr, 10);

    for(int i=0; i<10 ; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

// HW - Selection sort, Insertion Sort