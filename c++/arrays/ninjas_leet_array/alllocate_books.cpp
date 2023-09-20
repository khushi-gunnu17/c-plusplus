#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid ) {
    int StudentCount = 1;
    int pageSum = 0;

    for (int i = 0; i<n ; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        
        else {
            StudentCount++;
            if(StudentCount > m || arr[i] > mid) {
                return false;
            }
            else {
                pageSum = arr[i];
            }
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int start = 0;

    int sum = 0;
    for(int i = 0; i<n ; i++) {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end) {
        if(isPossible(arr, n , m , mid)) {
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

int main () {
    int arr[4] = {10, 20 , 30 , 40};

    cout << "Book Allocation : " << allocateBooks(arr, 4 , 2);
    return 0;
}