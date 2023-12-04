#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int m = n;
    int mask = 0;

    //edge case
    if(n==0) {
        return 1;
    }

    while(m!=0) {
        m = m >> 1;
        mask = (mask << 1) | 1;     // how to know that how many times it is done 
    }

    int ans = (~n) & mask;
    cout << "The answer is : " << ans << endl; 

    return 0;
}