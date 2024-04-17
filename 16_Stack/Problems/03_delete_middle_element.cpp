#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int size) {
    // base case
    if (count == size/2) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // recusrive 
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

int main() {

    stack<int> s;
    s.push(25);
    s.push(67);
    s.push(36);
    s.push(10);
    s.push(29);

    deleteMiddle(s, s.size());

    cout << "The stack after the deletion is : ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    return 0;
}