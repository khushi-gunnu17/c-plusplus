#include <iostream>
using namespace std;

//1--> Prime number.
//0--> not Prime

bool isPrime (int n) {
    for(int i=2; i<n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int n;
    cout << "Enter the number : "; 
    cin >> n;

    if(isPrime) {
        cout << " is a prime number . " << endl;
    } else {
        cout << " not a prime number . " << endl;
    }
    return 0;
}