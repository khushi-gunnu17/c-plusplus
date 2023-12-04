#include <iostream>
using namespace std;

int main() {

    string str;

    cin >> str;
    str[2] = '\0';

    cout << str; 

    return 0;
}