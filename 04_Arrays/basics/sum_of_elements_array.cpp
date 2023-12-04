#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
    int sum = 0;

    for(int i=0 ; i<n ; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    int ans = sum(arr, 5);
    cout << "the sum of the array's elements is : " << ans << endl;
    return 0;
}