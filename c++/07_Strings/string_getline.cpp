#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the string : ";
    // cin.getline (str, 100);
    getline(cin, str);
    cout << str;
    return 0;
}