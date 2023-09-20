#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    int sum = 0;

    for(int i = 1; i<=n; i++) {
        // sum = sum + i;
        sum+=i; 
    }

    cout << "Sum of n numbers is : " << sum << endl; 
    return 0;
}