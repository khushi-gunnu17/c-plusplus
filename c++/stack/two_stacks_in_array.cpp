#include <iostream>
using namespace std;

class twoStacks {
    int *arr;
    int top1;
    int top2;
    int size;

    public:

    // initialize twoStacks
    twoStacks(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // push in stack 1
    void push1(int num) {
        // atleast an empty space should be present 
        if(top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        } else {
            cout << "Stack overflow." << endl;
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
};

int main() {

    return 0;
}