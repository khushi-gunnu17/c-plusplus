#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    queue<int> rev(queue<int> q) {
       stack<int> s;

       while(!q.empty()) {
        int element = q.front();
        q.pop();
        s.push(element);
       }

       while(!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
       }
       return q;
    }

    void printQueue(queue<int> q) {
        while(!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
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

    cout << "The original queue is : ";
    sol.printQueue(q);

    queue<int> reversed;

    reversed = sol.rev(q);

    cout << endl << "The reversed queue is : ";
    sol.printQueue(reversed);

    return 0;
}

// TC = O(n)
// SC = O(n)