#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int painterCount = 1;
    int boardSum = 0;

    for(int i=0 ; i<n ; i++) {
        if(boardSum + arr[i] <= mid) {
            boardSum += arr[i];
        } 

        else {
            painterCount++;
            if(painterCount > m || arr[i] > mid) {
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}

// here, m is the number of painters and n is the size of the array
int partitionBoards(int arr[], int n, int m) {
    int start = 0;

    int sum = 0;
    for(int i=0 ; i<n ; i++) {      //  // to calculate the max and the min value for the no. of boards.
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {

    int arr[4] = {5, 5, 5, 5};

    cout << "Painter's Partition : " << partitionBoards(arr, 4, 2);

    return 0;
}