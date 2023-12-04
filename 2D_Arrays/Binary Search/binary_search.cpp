#include <iostream>
// #include <vector>
using namespace std;

bool searchMatrix(int matrix[][3], int target) {  
    int row = 3;        // int roew = matrix.size()
    int col = 3;        // int col = matrix[0].size()

    int start = 0;
    int end = (row*col - 1);
    int mid = start + (end - start)/2;

    while(start<=end) {

        int element = matrix[mid/col][mid % col];

        if(element == target) {
            return 1;
        }

        if(element < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return 0;
}


int main() {
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int ans = searchMatrix(matrix ,5);
    cout << "The answer is : "<< ans << endl;
    // 1 --> true
    // 0 --> false
    return 0;
}

// Time complexity = O(log n*m);

// Now do the same with vectors