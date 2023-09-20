#include <iostream>
using namespace std;

int main () {

    // subtract the product and sum of digits of an integer

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int prod = 1;
    int sum = 0; 

    while(n!=0) {
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;

        n = n/10;
    }

    int answer = prod - sum;
    cout << "The answer is :" << answer << endl; 
    return 0;
}