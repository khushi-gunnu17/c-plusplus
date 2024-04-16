// stack is a data structure which follows the principle of LIFO (Last In First Out).
// Operations ==>
/* Push, Pop, Peek, Empty */

#include <iostream>
#include <stack>
using namespace std;

int main() {

    // creation of stack
    stack<int> s;

    // push operation
    s.push(3);
    s.push(4);
    s.push(5);

    // pop operation
    s.pop();

    cout << "Printing the top element : " << s.top() << endl;
    cout << "Size of the stack is : " << s.size() << endl;

    if(s.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}