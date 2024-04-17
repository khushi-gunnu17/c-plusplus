#include <iostream>
using namespace std;

class twoStack {
    int *arr;
    int top1;
    int top2;
    int size;

    public:

    // initialize twoStacks
    twoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // push in stack 1
    void push1(int num) {
        // atleast an empty space should be present 
        if((top2 - top1) > 1) {
            top1++;
            arr[top1] = num;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    // push in stack2 
    void push2(int num) {
        // atleast an empty space should be present 
        if((top2 - top1) > 1) {
            top2--;
            arr[top2] = num;
        } else {
            cout << "Stack overflow." << endl;
        }
    }

    // pop from stack 1 and returned popped element.
    int pop1() {
        if(top1 < 0) {
            cout << "Stack Underflow." << endl;
            return -1;
        } else {
            int ans = arr[top1];
            top1--;
            return ans;
        }
    }

    // pop from stack 2 and returned popped element. 
    int pop2() {
        if(top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            cout << "Stack Underflow." << endl;
            return -1;
        }
    }

    void displayStacks() {
        cout << "Stack 1 : ";
        for(int i = 0; i <= top1; i++) {
            cout << arr[i] << " ";
        } 
        cout << endl;

        cout << "Stack 2 : ";
        for (int i = size - 1; i >= top2 ; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~twoStack() {
        delete[] arr;
    }
};

int main() {

    twoStack s1(10);

    s1.push1(10);
    s1.push1(2);
    s1.push1(78);
    s1.push1(45);
    s1.push1(34);
    s1.push1(12);
    s1.push2(46);
    s1.push2(78);
    s1.push2(90);
    s1.push2(36);

    s1.displayStacks();
    
    s1.pop1();
    s1.pop2();

    cout << "After popping : " << endl;
    s1.displayStacks();

    return 0;
}