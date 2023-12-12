#include <iostream>
#include <math.h>
using namespace std;

int power(int n) {

    // base case
    if(n == 0) {
        return 1;
    }

    // recursive relation.
    int samllerProblem = power(n-1);
    int biggerProblem = 2 * samllerProblem;
    return biggerProblem;           // return (2 * power(n-1));
}

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = power(n);
    cout << ans << endl;
    
    return 0;
}