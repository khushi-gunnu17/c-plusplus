#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s, int num) {
    // base case
    if ( s.empty() || (!s.empty() && s.top() < num) ) {
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    // recursive case
    sortedInsert(s, num);

    s.push(n);
}

void sortStack(stack<int> &stack) {
	// base case
    if(stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);

    sortedInsert(stack, num);
}

int main() {

    stack<int> stk;

    stk.push(5);
    stk.push(-2);
    stk.push(9);
    stk.push(-7);
    stk.push(3);

    sortStack(stk);

    cout << "After sorting : ";

    while(!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}