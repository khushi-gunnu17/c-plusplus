#include <iostream>
using namespace std;

// not able to understand.

bool checkEqual(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) {
        return false;
    }

    // character count array 
    int count1[26] = {0};

    // count the ocurrences of each character in s1.
    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 string in a window of size 1 length and compare
    int windowSize = s1.length();
    int count2[26] = {0};

    // Running for the first window
    for (int i = 0; i < windowSize; i++) {
        int index = s2[i] - 'a';
        count2[index]++;
    }

    // Check if the counts for the first window are equal to counts for s1
    if (checkEqual(count1, count2)) {
        return true;
    }

    // Continue processing the rest of the string
    for (int i = windowSize; i < s2.length(); i++) {
        int newCharIndex = s2[i] - 'a';
        int oldCharIndex = s2[i - windowSize] - 'a';

        // Increment count for the new character entering the window
        count2[newCharIndex]++;
        // Decrement count for the character leaving the window
        count2[oldCharIndex]--;

        // Check if the counts for the current window are equal to counts for s1
        if (checkEqual(count1, count2)) {
            return true;
        }
    }

    // If no match is found, return false.
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << checkInclusion(s1, s2) << endl;

    return 0;
}


// Time complexity = O(m + n)
// space complexity = O(1)