#include <iostream>
#include <math.h>
using namespace std;

int main () {

    int n;
    cout << "Enter the value of n : ";
    cin >> n; 

    int ans = 1;
    for(int i = 0; i<=30; i++) {
       int ans = pow(3,i);
        if((ans==n)) {
            cout << "the code is working for " << i << endl;
            return 1;
        }
    }
   
    // for(int i = 1; i<=31; i++) {
    //    ans = ans * 3;
    //     if(ans == n) {
    //         cout << "the code is working for " << i << endl;
    //         return true;
    //     }
    // }
    cout << "ans " << ans << endl; 
    return 0;
}