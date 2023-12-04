#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    cout << "Enter the two numbers : ";
    cin >> a >> b;

    int count_a = 0;
    while(a != 0) {
        if(a & 1 == 1) {
            count_a++;
        }
        a = a >> 1;
    }

    int count_b = 0;
    while(b != 0) {
        if(b & 1 == 1) {
            count_b++;
        }
        b = b >> 1;
    }

    int ans = count_a + count_b;
    cout << "The total number of set bits are : " << ans << endl;

    return 0;
}