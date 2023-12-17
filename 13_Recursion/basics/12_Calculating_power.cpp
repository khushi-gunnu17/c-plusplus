#include <iostream> 
using namespace std;

int power(int a, int b) {
    // Base case
    if(b == 0) {
        return 1;
    }

    if(b == 1) {
        return a;
    }

    // Rceursive call
    int ans = power(a, b/2);

    if(b % 2 == 0) {    // even 
        return ans * ans;
    } 
    else {      // odd
        return a * ans * ans;
    }
    return -1;
}

int main() {

    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << "The answer is : " << ans << endl;
    
    return 0;
}