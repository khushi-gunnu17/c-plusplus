#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int count = 0;
    while(n!=0) {
        //checking last bit
        if(n&1) {
            count++;
        } 
        n = n>>1;
    }
    cout << "The answer is : " << count << endl;
    return 0; 
}