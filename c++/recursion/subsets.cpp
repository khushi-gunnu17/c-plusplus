#include <iostream>
#include <vector>
using namespace std;

// pass by reference for ans 
void solve(vector<int> nums, vector<int> output, int index, vector <vector <int>>& ans) {
    // Base case 
    if(index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // exclude 
    solve(nums, output, index + 1, ans);

    // include 
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector <vector <int>> subsets (vector<int>& nums) {
    vector <vector<int>> ans;
    vector <int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main() {
    vector<int> arr(5);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    subsets(arr);

    for(int i:arr) {
        cout << arr[i] << endl;   
    }
    return 0;
}