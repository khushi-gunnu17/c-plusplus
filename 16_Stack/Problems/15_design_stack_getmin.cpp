// Design a stack that supports getMin() in O(1) time and O(1) extra space.

#include <bits/stdc++.h>
using namespace std;

class SpecialStack {
    public:
    stack<int> s;
    int mini;
        
    void push(int data) {
        // for first element
        if(s.empty()) {
            s.push(data);
            mini = data;
        }
        else {
            if(data < mini) {
                s.push(2 * data - mini);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    void pop() {
        if(s.empty()) {
            return;
        }

        int curr = s.top();
        s.pop();

        if(curr > mini) {
            return;
        } else {
            mini = 2 * mini - curr;
            return;
        }
    }

    int top() {
        if(s.empty()) {
            return -1;
        }

        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else {
            return curr;
        }
    }

    int getMin() {
        if(s.empty()) {
            return -1;
        }

        return mini;
    }  
};

int main() {

    SpecialStack stk;

    stk.push(5);
    stk.push(3);
    stk.push(8);
    stk.push(2);
    stk.push(4);

    int minElement = stk.getMin();
    cout << "The minimum element is : " << minElement << endl;


    return 0;
}