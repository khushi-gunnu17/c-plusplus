#include <iostream>
using namespace std;

void sayDigits(int n, string str[]) {

    // Base case 
    if(n == 0) {
        return;
    }

    // Processing           // one time number got taken
    int digit = n % 10;
    n = n/10;

    // Recursive call
    sayDigits(n, str);
    cout << str[digit] << " ";      // one time number got printed
}

int main() {
    int n;
    cout << "Enter the value : ";
    cin >> n;

    string str[n] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << endl;
    sayDigits(n, str);
    cout << endl;

    return 0;
}

// HW 
/*
Make its recursion tree and its function call stack.

*/