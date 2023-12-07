#include <iostream>
#include <vector> 
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector <int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total) {
        // print starting row
        for(int index = startingCol; count < total && index<=endingCol; index++) {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // print ending col
        for(int index = startingRow; count < total && index<=endingRow; index++) {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for(int index = endingCol; count < total && index>=startingCol; index--) {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //print starting col
        for(int index = endingRow; count < total && index>=startingRow; index--) {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main() {
    
    vector <vector <int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector <int> result = spiralOrder(arr);

    int rows = arr.size();
    int cols = arr[0].size();

    // in the form of a single array
    for(int i:result) {
        cout << i << " ";
    } cout << endl;

    // Printing the result in the form of a 2d array
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

// Time complexity = O(n*m)
// space complexity = O(1)