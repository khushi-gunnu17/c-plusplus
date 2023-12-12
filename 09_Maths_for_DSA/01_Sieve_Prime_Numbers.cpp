#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes

int SieveOfEratosthenes(int n) {

    int count = 0;
    vector <bool> prime(n+1 , true);

    prime[0] = prime[1] = false;

    for(int i=2 ; i<n ; i++) {
        if(prime[i]) {
            count++;
    
            // marking those numbers which are coming in the table of primes
            for(int j=2*i ; j<n ; j += i) {
                prime[j] = 0;
            }
        }
    }

    // Print all prime numbers 
    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            cout << i << " "; 
        }
    }

    return count;
}

// Time complexity : O(n * log(log n))
// space complexity : O(n)

int main() {

    int n;
    cout << "Print the numbers upto which prime numbers are to be calculated : ";
    cin >> n;

    int ans = SieveOfEratosthenes(n);

    cout << endl << "the total number of primes are : " << ans << endl;

    return 0;
}
