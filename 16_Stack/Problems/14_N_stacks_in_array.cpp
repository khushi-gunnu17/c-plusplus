// N stacks in an array

// n = Number of stacks
// s = Size of array

#include <bits/stdc++.h>
using namespace std;

class NStack {
private :
    int *arr;
    int *top;
    int *next;

    int n, s;

    int freespot;

public:
    // Initialize your data structure.
    NStack(int N, int S) {
        this -> n = N;
        this -> s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // initializing array with all zero values
        for(int i = 0; i<s ; i++) {
            arr[i] = 0;
        }

        // initializing top
        for(int i = 0; i<n ; i++) {
            top[i] = -1;
        }

        // initialising next
        for(int i = 0; i<s ; i++) {
            next[i] = i+1;
        }
        // updating last index value to -1
        next[s-1] = -1;

        freespot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m) {
        // checking for overflow
        if(freespot == -1) {
            return false;
        }

        // finding index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // insert element
        arr[index] = x;

        // update next;
        // m-1 = coz, of zero indexing
        next[index] = top[m-1];

        // update top
        top[m-1] = index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m) {
        // checking for underflow
        if(top[m-1] == -1) {
            return -1;
        }

        int index = top[m-1];
        int poppedValue = arr[index];
        arr[index] = 0;

        top[m-1] = next[index];
        
        next[index] = freespot;

        freespot = index;

        return poppedValue;
    }

    void printArray() {
        cout << "Array elements are : ";
        for (int i = 0; i<s ; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};



int main() {

    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int N;
    cout << "Enter the number of the stacks : ";
    cin >> N;

    NStack stk(N, size);

    stk.push(15, 1);
    stk.push(16, 2);
    stk.push(56, 2);
    stk.push(89, 3);
    stk.push(26, 4);

    cout << "Before popping : ";
    stk.printArray();

    int value = stk.pop(2);
    cout << endl << "After popping the value : " << value << endl;
    stk.printArray();

    return 0;
}

// TC = O(1)
// SC = O(s + n)