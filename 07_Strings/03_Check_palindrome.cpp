#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch>='a' && ch<='z')
        return ch;
    else {                                  // char to number --> ch - '0'
        char temp = ch - 'A' + 'a';         // U to L --> ch - 'A' + 'a';
        return temp;                        // L to U --> ch - 'a' + 'A';
    }
}

bool checkPalindrome(char arr[], int n) {
    int s = 0;
    int e = n-1;
     
    while(s<=e) {
        if(toLowerCase(arr[s]) != toLowerCase(arr[e])) {
            return 0;
        } 
        else {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char array[], int n) {                 // Reversing a string
    int s = 0;
    int e = n-1;

    while(s<=e) {
        swap(array[s++], array[e--]);
    }    
    return;
}

int getLength(char array[]) {                    // Length of the string
    int count = 0;
    for(int i=0 ; array[i] != '\0' ; i++) {
        count++;
    }
    return count;
}

int main() {

    char name[10];
    cout << "Enter the word which needs to be checked : ";
    cin >> name;

    cout << "Your word is : " << name << endl;

    int len = getLength(name);
    cout << "Length of the word is  = " << len << endl;

    reverse(name, len);
    cout << "your word is in reverse : " << name << endl;

    cout << "Palindrome or not : " << checkPalindrome(name, len);

    return 0;
}