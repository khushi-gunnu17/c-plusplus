#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size ; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    return;
}

void swapAlternate(int arr[], int size) {
    for(int i=0 ; i<size ; i+=2) {
        if((i+1) < size) {
            swap(arr[i], arr[i+1]);
            /* int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            */
        }
    }
    return;
}

int main() {
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    swapAlternate(even, 6);
    printArray(even, 6);

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}