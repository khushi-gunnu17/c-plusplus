#include <iostream>
#include <vector>
using namespace std;

vector <int> wavePrint(vector <vector <int>> arr, int nrows, int mcols) {
    vector <int> ans;

    for(int col = 0; col<mcols ; col++) {
        if(col & 1) {       // represents odd index   / Bottom to top
            for(int row = nrows - 1; row>=0 ; row--) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        } else {           // represents even index     / top to bottom
            for(int row = 0; row < nrows ; row++) {
                //cout << arr[row][col] << endl;
                ans.push_back(arr[row][col]);
            }
        } 
    } 
    return ans;
}



int main() {
    
    vector <vector <int>> arr;

    wavePrint(arr, 3, 4);
    cout << endl << "Original vector is : ";
    for(int i=0; i<arr.size() ; i++) {
        for(int j=0; j<arr[i].size() ; j++) {
            cout << arr[i][j] << " ";
            cout << endl;
        }
    }
   // cout << ans << " " << endl;
    return 0;
}

// Time complexity = O(n)

// int main not working