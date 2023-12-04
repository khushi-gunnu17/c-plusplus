// find triplets of the given sum 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findTriplets(int arr[], int n, int targetSum) {
    for(int i=0 ; i<n-2 ; i++) {
        for(int j=i+1 ; j<n-1 ; j++) {
            for(int k=j+1 ; k<n ; k++) {
                if(arr[i] + arr[j] + arr[k] == targetSum) {
                    cout << "Triplet found : " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl; 
                }
            }
        }
    }
} 

int main() {

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements in the array : ";

    int nums[n];
    for(int i=0 ; i<n ; i++) {
        cin >> nums[i];
    }

    int size = sizeof(nums) / sizeof(nums[0]);
    int targetSum = 10;

    cout << "The triplets are : " << endl;
    findTriplets(nums, size, targetSum);

    return 0;
}