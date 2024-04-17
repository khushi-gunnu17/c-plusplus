#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element) {
    // base case
    if(s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack) {
    // base case
    if(stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive case
    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main() {

    stack<int> stk;
    
    stk.push(56);
    stk.push(76);
    stk.push(36);
    stk.push(97);
    stk.push(20);

    reverseStack(stk);

    cout << "After reversing the stack : ";
    while(!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}