#include <iostream>
using namespace std;

int main() {

    string str;
    cout << "Enter your name : ";
    cin >> str;

    str[2] = '\0';
    cout << str; 
    
    return 0;
}

// key differences between char array and string. = h/w