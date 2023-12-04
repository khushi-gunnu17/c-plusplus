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
    cout << endl;

    int s;
    cout << "Enter the sum : " ; 
    cin >> s;

    for(int i = 0 ; i<size ; i++) {
        for(int j=i+1; j<size ; j++) {
            if(arr[i] + arr[j] == s) {
                // vector<int> temp; 
                cout << min(arr[i], arr[j]) << "  " << max(arr[i], arr[j]) << endl;         
            }
        }
    }
    return 0;
}