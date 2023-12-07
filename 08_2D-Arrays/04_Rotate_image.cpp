#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    reverse(matrix.begin(), matrix.end());

    for(int i=0 ; i< matrix.size() ; i++) {
        for(int j=i+1 ; j<matrix.size() ; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}     

int main() {

    vector <vector <int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = arr.size();
    int cols = arr[0].size();

    cout << "printing the original matrix : " << endl;
    for(int i=0 ; i<rows ; i++) {
        for(int j=0 ; j<cols ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotate(arr); 
    cout << endl;

    cout << "printing the rotated matrix : " << endl;
    for(int i=0 ; i<rows ; i++) {
        for(int j=0 ; j<cols ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Time Complexity : O(n square 2)
// space Complexity : O(1)