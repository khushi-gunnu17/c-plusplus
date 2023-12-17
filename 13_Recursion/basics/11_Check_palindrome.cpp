#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j) {
    // base case
    if(i>j) {
        return true;
    }

    if(s[i] == s[j]) {
        return checkPalindrome(s, i + 1, j - 1);
    } 
    else {
        return false;
    }
}

int main() {
    string name = "abcba";
    
    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
    cout << isPalindrome << endl;

    if(isPalindrome) {
        cout << "it's a palindrome." << endl;
    } else {
        cout << "it's not a palindrome." << endl;
    }
    return 0;
}

// Optimise this code using one pointer approach i.e, one variable usage 
