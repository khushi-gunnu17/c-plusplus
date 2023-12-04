#include <iostream>
using namespace std;

int print(int n) {
    if(n == 0) {
        return 0;
    }

    print(n-1);     // This line will execute first for all the values.

    cout << n << endl;  // Tail recursion
}


int main() {
    int n;
    cout << "Enter the value of N : ";
    cin >> n;

    print(n);

    return 0;
}

// Documentation reference = code studio