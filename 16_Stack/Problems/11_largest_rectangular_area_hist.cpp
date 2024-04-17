// Largest rectangular area in a histogram

#include <bits/stdc++.h>
using namespace std;

// calculating next smaller elements
vector<int> nextSmallerElements(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n-1 ; i >= 0 ; i--) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {      // didn't understand these changes made here ?
            s.pop();
        }
        // ans is stack's top
        ans[i] = s.top();

        s.push(i);
    }

    return ans;
}

// calculating prev smaller elements
vector<int> prevSmallerElements(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = 0 ; i<n ; i++) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        // ans is stack's top
        ans[i] = s.top();

        s.push(i);
    }

    return ans;
}

int largestRectangle(vector<int> & heights) {
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElements(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElements(heights, n);

    int area = INT_MIN;

    for(int i = 0 ; i<n ; i++) {
        int length = heights[i];

        if(next[i] == -1) {
            next[i] = n;
        }

        int breadth = next[i] - prev[i] - 1;

        int newArea = length * breadth;
        area = max(area, newArea);

    }
    return area;
}

int main() {

    vector<int> histogram_elem;

    histogram_elem.push_back(2);
    histogram_elem.push_back(1);
    histogram_elem.push_back(5);
    histogram_elem.push_back(6);
    histogram_elem.push_back(2);
    histogram_elem.push_back(3);

    int largestArea = largestRectangle(histogram_elem);

    cout << "The largest rectangle area in the histogram is : " << largestArea << endl;

    return 0;
}

// TC = O(n)
// SC = O(n)