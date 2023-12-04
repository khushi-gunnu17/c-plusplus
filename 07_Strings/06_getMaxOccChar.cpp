#include <iostream>
using namespace std;

char getMaxOccCharacter(string str) {
    int arr[26] = {0};

    // Create an array of count of characters 
    for(int i=0 ; i<str.length() ; i++) {
        int number = 0;
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        } else {
            number = ch - 'A';
        }
        arr[number]++;
    }

    // find maximum occurring character.
    int maxCount = -1, ans = 0;
    // to keep track of the maximum frequency (maxCount) and the corresponding 
    // character index (ans).

    for(int i=0; i<26 ; i++) {
        if(arr[i] > maxCount) {
            ans = i;
            maxCount = arr[i];
        }
    }

    cout << "The Maximum count for the value is : " << maxCount << endl;

    char finalAns = 'a'+ ans;
    return finalAns;   // 'a' + ans;
}

int main() {
    string str;
    cout << "Enter the string : ";
    cin >> str;
    cout << "The maximum occuring character is : " << getMaxOccCharacter(str) << endl;
    return 0;
}

// Time_complexity = O(n)
// space somplexity = O(1)