#include <iostream>
using namespace std;

int getPivot(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start<end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } 
        else {                      
            end = mid;              
        }
        mid = start + (end - start)/2;
    }
    return start;       // can be either end here 
}

int main() {
    int arr[6] = {5,7,9,2,3,4};

    cout << "Pivot is at index = " << getPivot(arr, 6) << endl;
    
    return 0;
}