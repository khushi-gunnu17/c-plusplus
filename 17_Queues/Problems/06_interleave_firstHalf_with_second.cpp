#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    // you have to use a stack as an intermmediate
    vector<int> rearrangeQueue(queue<int> &q){
        stack<int> s;

        int t = q.size() / 2;
        
        // storing first half of the queue into the stack
        while(t--) {
            int val = q.front();
            q.pop();
            s.push(val);
        }

        // recalling the stored vales back again into the queue
        while(!s.empty()) {
            int val = s.top();
            s.pop();
            q.push(val);
        }

        // now pop and put the first half of the queue into the back
        while(t--) {
            int val = q.front();
            q.pop();
            q.push(val);
        }

        // first half of q now again in the stack 
        // as now the first half values are in the original order.
        while(t--) {
            int val = q.front();
            q.pop();
            s.push(val);
        }

        // now here we will get the values in the interleaved manner.
        while(!s.empty()) {
            int val = s.top();
            s.pop();
            q.push(val);
            int elem = q.front();
            q.pop();
            q.push(elem);
        }
    }
};

vector<int> rearrangeQueue(queue<int> &q){
    queue<int> newQ;

    int n = q.size();

    int halfSize = n / 2;

    while(halfSize--) {
        int val = q.front();
        q.pop();
        newQ.push(val);
    }

    while(!newQ.empty()) {
        int val = newQ.front();
        newQ.pop();
        q.push(val);
        int elem = q.front();
        q.pop();
        q.push(elem);
    }
    
    vector<int> vect;
    while(!q.empty()) {
        vect.push_back(q.front());
        q.pop();
    }

    return vect;
}

void interLeaveQueue(queue < int > & q) {
    queue<int> newQ;

    int t = q.size() / 2;

    while(t--) {
        int val = q.front();
        q.pop();
        newQ.push(val);
    }

    while(!newQ.empty()) {
        int val = newQ.front();
        newQ.pop();
        q.push(val);
        int elem = q.front();
        q.pop();
        q.push(elem);
    }
}

int main() {

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    vector<int> interleaved = rearrangeQueue(q);

    for(auto i : interleaved) {
        cout << i << " ";
    } cout << endl;

    return 0;
}

// TC = O(n)
// SC = O(n)