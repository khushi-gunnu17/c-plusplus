#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k) {
    // cout << endl;
    // printArray(arr, s, e);
    // element not found
    if(s > e) {
        return false;
    }

    int mid = s + (e - s)/2;
    // cout << "Value of array mid is : " << arr[mid] << endl;

    // element not found 
    if(arr[mid] == k) {
        return true;
    }

    if(arr[mid] < k) {
        return binarySearch(arr, mid + 1 , e , k);
    } else {
        return binarySearch(arr, s, mid - 1 , k);
    }
}

// int binarySearch(int arr[], int s, int e, int k) {
//        if(s<=e)
//        {
//         int mid = s + (e - s)/2;
//      if(arr[mid] == k) {
//          return mid;
//      }
//      if(arr[mid] < k) 
//          return binarySearch(arr, mid + 1 , e , k);
//          return binarySearch(arr, s, mid - 1 , k);     
//        }
//        return -1;   
//  }

int main() {
    int arr[] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 222;
 
    int ans = binarySearch(arr, 0, size-1, key);
    if(ans == -1) {
        cout<<"absent"; 
    }
    else
    {
        cout<<"present at index : "<< ans;
    }
}


// void printArray(int arr[], int s, int e) {
//     cout << "the size of the array is : " << e << endl;

//     for(int i=s ; i<=e ; i++) {
//         cout << arr[i] << " ";
//     } cout << endl;
// }
// HW - binary search all questions in recursion