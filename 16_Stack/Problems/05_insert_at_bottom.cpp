#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x) {
    // base case
    if(s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, x);

    s.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x) {
    solve(myStack, x);
    return myStack;
}

int main() {

    stack<int> stk;

    stk.push(14);
    stk.push(12);
    stk.push(47);
    stk.push(90);
    stk.push(48);

    stack<int> BottomStack = pushAtBottom(stk, 24);

    while(!BottomStack.empty()) {
        cout << BottomStack.top() << " ";
        BottomStack.pop();
    }

    return 0;
}