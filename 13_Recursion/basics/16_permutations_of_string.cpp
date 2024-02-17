// Permutations of a string

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
    // Base case
    if(index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    for(int i=index ; i<nums.size() ; i++) {
        swap(nums[index], nums[i]);
        solve(nums, ans , index + 1);
        // backtrack
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main() {

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

vector<string> generatePermutations(string &str) {
    vector<vector <int>> ans;
    
}

int main() {

    

    return 0;
}