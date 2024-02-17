// Permutations of a string

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(string str, vector<string> &ans, int index) {
    // Base case
    if(index >= str.length()) {
        ans.push_back(str);
        return;
    }

    for(int j = index ; j<str.length() ; j++) {
        swap(str[index], str[j]);
        solve(str, ans, index + 1);
        // backtrack
        swap(str[index], str[j]);
    }
}

vector<string> generatePermutations(string &str) {
    vector<string> ans;
    int index = 0;
    solve(str, ans, index);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {

    string str;
    cout << "Enter a string : ";
    cin >> str;
    
    vector<string> result = generatePermutations(str);

    cout << "Permutations of the given string are : " << endl;

    for(const string &permute : result) {
        cout << permute << endl;
    }

    return 0;
}