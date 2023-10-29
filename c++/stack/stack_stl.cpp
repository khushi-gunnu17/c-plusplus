#include <iostream>
#include <stack>
using namespace std;

int main() {
    // creation of stack
    stack<int> s;

    // push operation 
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout << "Printing the top element " << s.top() << endl;
    cout << "size of the stack is : " << s.size() << endl;

    if(s.empty()) {
        cout << "Stack is empty " << endl;
    } else {
        cout << "Stack is not empty " << endl;
    }

    // for(int i = s.top() ; i>0 ; i--) {
    //     cout << stack[i] << " ";
    // }


    return 0;
}