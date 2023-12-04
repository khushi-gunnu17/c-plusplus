#include <iostream>
using namespace std;

int main () {

     /*prime number or not*/

    // int n;
    // cin >>n;

    // int i = 2;
    // while(i<n) {
    //     if(n%i==0) {
    //         cout << "composite number for" << i << endl;
    //     } else {
    //         cout << "prime number for ." << i << endl;
    //     }
    //     i++; 
    // }  

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    bool isPrime = 1;

    for(int i = 2; i<n ; i++) {
        if(n%i==0) {
            // cout << "Composite number." << endl;
            isPrime == 0;
            break;
        }
    }

    if(isPrime == 0) {
        cout << "Composite number." << endl;
    } else {
        cout << "Prime number." << endl;
    }

    return 0;
}