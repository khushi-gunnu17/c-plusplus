#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i=0 ; i<stalls.size() ; i++) {
        if(stalls[i] - lastPos >= mid) {
            cowCount++;
            if(cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }   
    }
    return false;
}

// here , k is the number of aggressive cows. 
int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int start = 0;

    int maxi = -1;
    for(int i=0 ; i<stalls.size() ; i++) {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(isPossible(stalls, k, mid)) {
            ans = mid;
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {

    vector<int> stalls;

    stalls.push_back(4);
    stalls.push_back(2);
    stalls.push_back(1);
    stalls.push_back(3);
    stalls.push_back(6);

    cout << "the maximum minimum disatnce is : " << aggressiveCows(stalls, 2);

    return 0;
}