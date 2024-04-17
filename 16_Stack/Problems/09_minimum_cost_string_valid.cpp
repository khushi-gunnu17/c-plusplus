// Minimum cost to make string valid

#include <bits/stdc++.h>
using namespace std;

int findMinimumCost(string str) {
    // odd condition
    if(str.length() % 2 != 0) {
        return -1;
    }

    stack<char> s;
    for(int i = 0; i < str.length() ; i++) {
        char ch = str[i];

        if(ch == '{') {
            s.push(ch);
        }

        else {
            // ch is closing bracket here.
            if ( !s.empty() && s.top() == '{' ) {
                s.pop();
            }

            else {
                s.push(ch);
            }
        }
    }

    // stack contains invalid operation now 
    int a = 0, b = 0;
    while (!s.empty()) {
        if ( s.top() == '{' ) {
            a++;
        }
        else {
            b++;
        }

        s.pop();
    }

    int ans = (a + 1)/2 + (b + 1)/2;
    return ans;
}

int main() {

    string str;
    cout << "Enter the expression : ";
    getline(cin, str);

    int result = findMinimumCost(str);

    cout << "The Minimum cost required to make the string valid is : " << result << endl;

    return 0;
}