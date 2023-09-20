#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch>='a' && ch<='z')
        return ch;
    else {
        char temp = ch - 'A' + 'a';         // U to L --> ch - 'A' + 'a';
        return temp;                        // L to U --> ch - 'a' + 'A';
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;
     
    while(s<=e) {
        if(toLowerCase(a[s]) != toLowerCase(a[e])) {
            return 0;
        } else {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {                 // Reversing a string
    int s = 0;
    int e = n-1;

    while(s<=e) {
        swap(name[s++], name[e--]);
    }    
    return;
}

int getLength(char name[]) {                    // Length of the string
    int count = 0;
    for(int i=0 ; name[i] != '\0' ; i++) {
        count++;
    }
    return count;
}

int main() {

    char array[10];
    cout << "Enter the word which needs to be checked : ";
    cin >> array;

    cout << "Your word is : " << array << endl;

    int len = getLength(array);
    cout << "Length of the word is  = " << len << endl;

    reverse(array, len);
    cout << "your word is in reverse : " << array << endl;

    cout << "Palindrome or not : " << checkPalindrome(array, len);

    return 0;
}