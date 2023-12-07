// 88 leetcode = https://leetcode.com/problems/merge-sorted-array/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
    // starting from the end of both the arrays;
    int i = m-1;
    int j = n-1;

    int k = m + n - 1; // index for the merged arrays (nums1)

    // Merge from the end to the beginning
    while(i >= 0 && j >= 0) {
        // compare the elements from both the arrays and place the larger one in nums1;
        if(nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        }
        else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them to num1
    while(j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {

    int nums1[] = {1, 2, 3, 0, 0, 0};
    int n = 3;

    int nums2[] = {2, 5, 6};
    int m = 3;

    merge(nums1, n, nums2, m);

    // output the merged array
    for(int i=0 ; i<m+n ; i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}