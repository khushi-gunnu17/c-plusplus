#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n-1 ; i >= 0 ; i--) {
        int curr = arr[i];
        while(s.top() >= curr) {
            s.pop();
        }
        // ans is stack's top
        ans[i] = s.top();

        s.push(curr);
    }

    return ans;
}

int main() {

    vector<int> arr;

    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);

    vector<int> answer = nextSmallerElement(arr, 4);

    cout << "The next smaller elements for each of the integers in the array are : ";
    for(int i : answer) {
        cout << i << " ";
    } cout << endl;

    return 0;
}