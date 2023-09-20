#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2; 
    int ans = -1;

    while(start<=end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

        //Go to right part
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        // Go to left part 
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans; 
}


int lastOcc(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while(start<=end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;   // right for last occ
        }
        else if(arr[mid] > key) {    
            end = mid - 1;      // left
        } 
        else if(arr[mid] < key) {
            start = mid + 1;     // right
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    int odd[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout << "First occurence of 3 is at index : " << firstOcc(odd, 8 , 3) << endl;
    cout << "last occurence of 3 is at index : " << lastOcc(odd, 8 ,3) << endl;
    return 0;
}
