#include <bits/stdc++.h>
using namespace std;

long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
    
	deque<int> maxi(k);     // to store max elements 
    deque<int> mini(k);     // to store min elements 

    // addition of first k sized window

    for(int i=0; i<k ; i++) {

        // addition
        while(!maxi.empty() && nums[maxi.back()] <= nums[i]) {
            maxi.pop_back();
        }

        while(!mini.empty() && nums[mini.back()] >= nums[i]) {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

    }

    int ans = 0;
    ans += nums[maxi.front()] + nums[mini.front()];


    for (int i=k ; i<n ; i++) {
        
        // moving to the next window
        // removal
        while(!maxi.empty() && i - maxi.front() >= k) {
            maxi.pop_front();
        }

        while(!mini.empty() && i - mini.front() >= k) {
            mini.pop_front();
        }

        // addition logic
        while(!maxi.empty() && nums[maxi.back()] <= nums[i]) {
            maxi.pop_back();
        }

        while(!mini.empty() && nums[mini.back()] >= nums[i]) {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        ans += nums[maxi.front()] + nums[mini.front()];
    }
    
    return ans;
}










int solve(int *arr, int n, int k) {
    deque<int> maxi(k);     // to store max elements 
    deque<int> mini(k);     // to store min elements 

    // addition of first k sized window

    for(int i=0; i<k ; i++) {

        // addition
        while(!maxi.empty() && arr[maxi.back()] <= arr[i]) {
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i]) {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

    }

    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];


    for (int i=k ; i<n ; i++) {
        
        // moving to the next window
        // removal
        while(!maxi.empty() && i - maxi.front() >= k) {
            maxi.pop_front();
        }

        while(!mini.empty() && i - mini.front() >= k) {
            mini.pop_front();
        }

        // addition logic
        while(!maxi.empty() && arr[maxi.back()] <= arr[i]) {
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i]) {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }
    
    return ans;
}

int main() {

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int k;
    cout << endl << "Enter the size of the subarray : ";
    cin >> k;

    int arr[n];

    for (int i = 0; i<n ; i++) {
        cin >> arr[i];
    }

    int ans = solve(arr, n, k);
    cout << ans << endl;

    return 0;
}