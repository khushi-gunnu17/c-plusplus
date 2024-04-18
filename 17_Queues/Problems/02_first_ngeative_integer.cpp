// first negative integer in window of size k

#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {

    deque<long long int> dq;

    vector<long long> ans;

    // processing first window of k size
    for(int i = 0; i<K ; i++) {
        if(A[i] < 0) {
            dq.push_back(i);
        }
    }

    // store answer of first k sized window 
    if (dq.size() > 0) {
        ans.push_back(A[dq.front()]);
    } else {
        ans.push_back(0);
    }

    // processing for remaining windows
    for(int i = K ; i<N ; i++) {
        // removal
        // didn't understand this step
        if (!dq.empty() && i - dq.front() >= K) {
            dq.pop_front();
        }

        // addition of the curr element
        if(A[i] < 0) {
            dq.push_back(i);
        }

        // ans store
        if (dq.size() > 0) {
            ans.push_back(A[dq.front()]);
        } else {
            ans.push_back(0);
        }
    }
    return ans;
}

int main() {

    long long int N;
    cout << "Enter the size of the array : ";
    cin >> N;
    long long int A[N];

    cout << "Enter the values in the array : ";
    for(int i=0 ; i<N ; i++) {
        cin >> A[i];
    }

    int K;
    cout << "Enter the window size : ";
    cin >> K;

    vector<long long> ans = printFirstNegativeInteger(A, N, K);

    // the result :
    cout << "First negative integers in each window of size " << K << " are:" << endl;
    for (int i : ans) {
        cout << i << " ";
    } 
    cout << endl;

    return 0;
}

// TC = O(n)
// SC = O(n)