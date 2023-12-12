#include <iostream>
using namespace std;

// Euclid algorithm => gcd(a, b) = gcd(a - b, b) = gcd(a % b, b)

int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }

    if(b == 0) {
        return a;
    }

    while(a != b) {
        if(a > b) {
            a = a - b;
        } 
        else {
            b -= a;
        }
    }
    return a;
}

// // recursively 
// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }

int main() {

    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a, b);

    cout << "The Greatest common divisor of " << a << " & " << b << " is : " << ans << endl; 

    return 0;
}