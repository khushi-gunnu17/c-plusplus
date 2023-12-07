#include <iostream>
#include <vector>
using namespace std;

vector <int> wavePrint(vector <vector <int>> arr, int nrows, int mcols) {
    vector <int> ans;

    for(int col = 0; col < mcols ; col++) {
        if(col & 1) {       // represents odd index   / Bottom to top
            for(int row = nrows - 1; row >= 0 ; row--) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        } 

        else {           // represents even index     / top to bottom
            for(int row = 0; row < nrows ; row++) {
                //cout << arr[row][col] << endl;
                ans.push_back(arr[row][col]);
            }
        } 
    } 
    return ans;
}

void inputArray(vector <vector <int>>& arr, int nrows, int mcols) {
    arr.resize(nrows, vector<int>(mcols));

    for(int i=0 ; i<nrows ; i++) {
        for(int j = 0 ; j < mcols ; j++) {
            cin >> arr[i][j];
        }
    }
    return;
}


int main() {
    // vector <vector <int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector <vector <int>> matrix;
    inputArray(matrix, 3, 3);

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector <int> result = wavePrint(matrix, rows, cols);

    // in the form of a single array
    for(int i:result) {
        cout << i << " ";
    } cout << endl;

    // printing the result in the form of a 2d array
    cout << "Spiral Order Matrix : " << endl;
    int resultIndex = 0;
    for(int i=0 ; i<rows ; i++) {
        for(int j=0 ; j<cols ; j++) {
            cout << result[resultIndex++] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Time complexity = O(n * m)
// space complexity = O(1)