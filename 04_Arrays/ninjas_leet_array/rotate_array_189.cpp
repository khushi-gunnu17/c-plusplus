#include <iostream>
#include <vector> 
using namespace std;

void rotateArray(int arr[], int n, int k) {
    int temp[n];

    // shifting in a cyclic way.
    for(int i=0 ; i<n ; i++) {          
        temp[(i+k) % n] = arr[i];
    }

    for(int i=0; i<n; i++) {
        arr[i] = temp[i];
    }

    return;
}

// void rotate(vector<int>& nums, int k) {
//         vector <int> temp[nums.size()];

//     for(int i=0 ; i<nums.size() ; i++) {
//         temp[(i+k)%nums.size()] = nums[i];
//     }

//     nums = temp;
// }

void printArray(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[6] = {2,4,6,8,10,12};

    int key;
    cout << "Enter the value from where to be rotated : ";
    cin >> key;

    rotateArray(arr, 6 , key);

    printArray(arr, 6);

    return 0;
}

