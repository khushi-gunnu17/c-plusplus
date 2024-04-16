#include <iostream>
using namespace std;

class Stack {
    // Properties
    public :
        int* arr;
        int top;
        int size;

    // Behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push( int element ) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    int peek() {
        if(top >= 0 && top < size) {
            return arr[top];
        } else {
            cout << "Stack is Empty" << endl;
            return -1;
        }  
    }

    bool isEmpty() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return true;
        } else {
            return false;
        }
    }
};

int main() {

    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(76);
    st.push(43);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is empty!";
    } else {
        cout << "Stack is not empty!";
    }

    return 0;
}

// time complexity = 0(1)