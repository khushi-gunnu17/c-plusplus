#include <iostream>
using namespace std;

char getMaxOccCharacter(string str) {
    int arr[26] = {0};

    // Create an array of count of characters
    for(int i=0 ; i<str.length() ; i++) {
        int number = 0;
        char ch = str[i];

        if(ch >='a' && ch <='z') {
            number = ch - 'a';
        } else {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for(int i=0; i<26 ; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a'+ ans;
    return finalAns;   // 'a' + ans;
}

int main() {
    string str;
    cout << "Enter the string : ";
    cin >> str;
    cout << getMaxOccCharacter(str) << endl;
    return 0;
}