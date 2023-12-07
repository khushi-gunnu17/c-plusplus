#include <iostream>
using namespace std;

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

    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int windowSize = s1.length();
    int count2[26] = {0};

    // Initialize count2 for the first window
    for (int i = 0; i < windowSize; i++) {
        int index = s2[i] - 'a';
        count2[index]++;
    }

    if (checkEqual(count1, count2)) {
        return true;
    }

    // Continue processing the rest of the string
    for (int i = windowSize; i < s2.length(); i++) {
        int newCharIndex = s2[i] - 'a';
        int oldCharIndex = s2[i - windowSize] - 'a';

        count2[newCharIndex]++;
        count2[oldCharIndex]--;

        if (checkEqual(count1, count2)) {
            return true;
        }
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << checkInclusion(s1, s2) << endl;

    return 0;
}
