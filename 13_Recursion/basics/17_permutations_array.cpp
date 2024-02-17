// permutations of an array

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector <int>> &ans, int index) {
    // Base case
    if(index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    for(int j = index ; j<nums.size() ; j++) {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        swap(nums[index], nums[j]);     // backtrack, coz we have made changes on the original string.
    }
}

vector<vector <int>> permute(vector<int> &nums) {
    vector<vector <int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main() {

    vector<int> nums = {1, 2, 3};

    vector<vector <int>> result = permute(nums);

    cout << "The permutations are : " << endl;

    for(const auto &permutations : result) {
        
        for(int i=0 ; i<permutations.size() ; i++) {
            cout << permutations[i];
            if(i < permutations.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}