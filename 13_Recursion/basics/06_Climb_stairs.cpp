#include <iostream>
using namespace std;

int countDistinctWays(long long int nStairs) {
    // Base case
    if(nStairs < 0) {
        return 0;
    }

    if(nStairs == 0) {
        return 1;
    }

    // Recursive case
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of stairs : ";
    cin >> n;

    int ans = countDistinctWays(n);
    cout << ans << endl;

    return 0;
}

