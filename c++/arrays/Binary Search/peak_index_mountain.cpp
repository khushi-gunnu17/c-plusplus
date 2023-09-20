#include <iostream>
using namespace std;

int peak_array (int arr[], int size) {
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s)/2 ;
    
    while(s<e) {
        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        else {
            e = mid; 
        }
        mid = s + (e - s)/2; 
    } 
    return mid;
}

int main () {
    int arr[5] = {1, 3, 4, 6, 2};
    cout << "The index of the peak array is : " << peak_array(arr, 5) << endl;
    return 0;
}