#include <iostream>
using namespace std;

int factorial (int n) {
    int fact = 1;
    for(int i = 1; i<=n; i++) {
        fact = fact * i;
    }
    return fact; 
}

int nCr (int n, int r) {
    int num = factorial(n);

    int den = factorial(r) * factorial(n-r);

    int ans = num/den;
    return ans;
}

int main () {
    
    int n, r;
    cin >> n >> r ;
    
    int ans = nCr(n,r);
    cout << "The nCr of the two numbers is : " << ans << endl;
    
    return 0;
}