#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // step 1 : pop first k elements from stack and put into the queue
        stack<int> s;
        
        for(int i = 0 ; i<k ; i++) {
            int val = q.front();
            q.pop();
            s.push(val);
        }

        // step 2 : fetch from stack and push into q
        while(!s.empty()) {
            int val = s.top();
            s.pop();
            q.push(val);
        }

        // step 3 : fetch first (n - k) element from q and push back into the queue
        int t = q.size() - k;

        while(t--) {
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }   
};

int main() {

    Solution sol;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    int k;
    cout << "Enter the number of elements to be reversed in the queue : ";
    cin >> k;

    queue<int> reversedElements = sol.modifyQueue(q, k);

    cout << "The queue values are : ";
    while(!reversedElements.empty()) {
        cout << reversedElements.front() << " ";
        reversedElements.pop();
    }

    return 0;
}

// TC = O(n)
// SC = O()