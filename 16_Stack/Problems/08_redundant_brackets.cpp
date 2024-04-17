#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> st;

    for(int i = 0; i < s.length() ; i++) {
        char ch = s[i];

        // either opening bracket here or an operator
        if (ch == '('  || ch == '+' || ch == '-' || ch == '/' || ch == '*') {
            st.push(ch);
        }
        else {
            // closing bracket
            if(ch == ')') {
                bool isRedundant = true;
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '/' || top == '*') {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if (isRedundant == true) {
                    return true;
                }

                // to also remove the opening bracket.
                st.pop();
            }
        }
    }

    return false;
}

int main() {

    string str;
    cout << "Enter the expression to found the redundant brackets ? : ";
    getline(cin, str);

    if (findRedundantBrackets(str)) {
        cout << "Redundant brackets found. !";
    } else {
        cout << "No redundant brackets found in the string !";
    }

    return 0;
}

// TC = O(n)
// SC = O(n)