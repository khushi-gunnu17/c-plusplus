// instersection of two arrays between two arrays in a sorted array 

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

    //First Array
    int m;
    cout << "Enter the size of the 1st array : ";
    cin >> m;
    cout << endl;

    int arr[m];
    inputArray(arr, m);
    printArray(arr, m);
    cout << endl;
    
    //Second Array
    int n;
    cout << "Enter the size of the 2nd array : ";
    cin >> n;
    cout << endl;

    int brr[n];
    inputArray(brr, n);
    printArray(brr, n);

    // Intersection of the two Arrays

    for(int i=0 ; i<m ; i++) {
        int element = arr[i];
        for(int j=0; j<n; j++) {

            if(element < brr[j]) {
                break;
            }

            if(element==brr[j]) {
                cout << element << " ";
                brr[j] = INT32_MIN; 
                break;
            }
        }
    }


    // optimized solution
    // Two pointer approach = single traversal 

    // int i = 0, j= 0;
    
    // while(i<m && j<n) {
    //     if(arr[i] == brr[j]) {
    //         cout << arr[i] << " ";
    //         i++; j++; 
    //     }

    //     else if(arr[i] < brr[j]) {
    //         i++;
    //     }

    //     else {
    //         j++;
    //     }
    // }
    return 0;
}