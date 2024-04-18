// Max rectangle in binary matrix with all 1's

#include <bits/stdc++.h>
using namespace std;

#define MAX 5

// calculating next smaller elements
vector<int> nextSmallerElements(int* arr, int n) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n-1 ; i >= 0 ; i--) {
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

// calculating prev smaller elements
vector<int> prevSmallerElements(int* arr, int n) {
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

int largestRectangleArea(int* heights, int n) {

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

int maxArea(int** M, int n, int m) {
    // compute area for the first row
    int area = largestRectangleArea(M[0], m);

    // for remaining rows
    for(int i = 1 ; i < n ; i++) {
        for(int j = 0; j < m ; j++) {

            // row updation : by adding previous row's values 
            if(M[i][j] != 0) {
                M[i][j] = M[i][j] + M[i-1][j];  
            } else {
                M[i][j] = 0;
            }

        }

        // entire row is updated now 
        int newArea = largestRectangleArea(M[i], m);
        area = max(area, newArea);
    }

    return area;
}


int main() {

    int n;
    cout << "Enter the rows of the matrix : ";
    cin >> n;

    int m;
    cout << "Enter the cols of the matrix : ";
    cin >> m;

    // allocating memory for the matrix
    int** Matrix = new int*[n];
    for(int i = 0; i<n ; i++) {
        Matrix[i] = new int[m];
    }

    cout << "Enter the values in the matrix : ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> Matrix[i][j];
        }
    }

    int area = maxArea(Matrix, n, m);

    cout << "The max rcatngle in a binary matrix with all 1's is : " << area << endl;

    // Free dynamically allocated memory 
    for(int i = 0 ; i < n ; i++) {
        delete[] Matrix[i];
    }
    delete[] Matrix;

    return 0;
}

// TC = O(n * m)
// SC = O(m)