#include <iostream>
using namespace std;

int print(int n) {

    // base case
    if(n == 0) {
        return 0;
    }

    // recursive relation
    print(n-1);     // This line will execute first for all the values.

    // processing part
    cout << n << endl;  // head recursion
}


int main() {
    int n;
    cout << "Enter the value of N : ";
    cin >> n;

    print(n);

    return 0;
}

// Documentation reference = code studio