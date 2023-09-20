#include <iostream>
#include <vector> 
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector <int> ans;
        long long int row = matrix.size();
        long long int col = matrix[0].size();

        int count = 0;
        long long int total = row * col;

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
                // ans.push_back(matrix][]);startingCol
                count++;
            }
            startingCol++;
        }
        return ans;
    }

int main() {
    vector <vector <int>>arr[3][4];
    
    spiralOrder();
    return 0;
}

// not working in leet code also

// Time complexity = O(n*m)