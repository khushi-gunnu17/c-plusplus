#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mapping[]) {

    // Base case
    if(index >= digits.length()) {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';   // To take out the integer equivalent of the character number.
    string value = mapping[number];

    for(int i=0; i<value.length() ; i++) {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();          // backtracking, so as to remove the first char value to add another one in the output.
    }

}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    string output = "";
    int index = 0;

    if(digits.length() == 0) {
        return ans;
    }

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main() {

    string digits;
    cout << "Enter a string of digits : ";
    cin >> digits;

    vector<string> result = letterCombinations(digits);

    cout << "Letter Combinations : " << endl;
    for(const string &combination : result) {
        cout << combination << endl;
    }
    cout << endl;

    return 0;
}