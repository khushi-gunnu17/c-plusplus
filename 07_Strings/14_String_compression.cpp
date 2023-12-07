#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while(i<n) {
            int j = i+1;
            while(j<n && chars[i] == chars[j]) {
                j++;
            }   
            // traversing complete or encountered a different character in the while loop.

            // storing old character
            chars[ansIndex++] = chars[i];

            int count = j-i;

            if(count > 1) {
                // converting counting into single digit and saving in the answer.
                string cnt = to_string(count);
                for(char ch:cnt) {
                    chars[ansIndex++] = ch;
                }
            }
            i=j;

            // chars.erase(chars.begin()+ansIndex,chars.end());
            // return chars.size();
        }
        return ansIndex;
    }

int main() {
    vector<char> chars;

    for(char i: chars) {
        cin >> i;
    }

    for(int i : chars) {
        cout << i << " ";
    } cout << endl;

    cout << compress(chars) << endl;

    return 0;
}

// working in leetcode only

// Time complexity = O(n)
// space complexity = O(1)