#include <iostream>
// #include <stack>
using namespace std;

# define N 100

class Stack {
    
    int top;

    public: 
    int element[N];

    Stack() {
        top = -1;
    }
    
    bool push(int x);
    // int pop();
    void pop();
    bool isEmpty();
    int peek();
};

bool Stack::push(int x) {
    if(top >= (N-1)) {
        cout << "Stack Overflow";
        return false;
    } else {
        element[++top] = x;
        // cout << x << " ";
        return true;
    }
}

// int Stack::pop() {
//     if(top < 0) {
//         cout << "Stack Underflow";
//         return 0;
//     } else {
//         int x = element[top--];
//         return x;
//     }
// }

void Stack::pop() {
    if(top < 0) {
        cout << "Stack Underflow";
    } else {
        top--;
    }
}

int Stack::peek() {
    if(top >= 0) {
        return element[top];
    } else {
        cout << "Stack is empty.";
        return -1;
    }
}

bool Stack::isEmpty() {
    return(top < 0);
}

int main() {
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(7);
    

    s.pop();
    s.pop();

    cout << "Elements present in stack : ";
    while(!s.isEmpty()) {
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}
