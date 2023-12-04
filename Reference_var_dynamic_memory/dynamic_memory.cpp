// Mostly memories are stored in the stack;
// Stack mmemory = Static memory allocation
// To use heap memory, you need to use new keyword.
// Dynamic memory allocation


#include <iostream>
using namespace std;

int getSum(int *arr, int n) {
    int sum = 0;
    for(int i = 0 ; i < n ; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    // new char;      // Address returned by this
    // char *ch = new char;    // Memory allocated in heap

    // char *ch in stack
    // new char in heap

    char character;
    char *c = &character;
    cout << sizeof(c) << endl;      // memory = 4

    // int *i = new int;

    // int *arr = new int[5];    // array - memory total = 24 bytes here, but 28 if pointer is 8 bytes

    int n;
    cin >> n;
    int *arr = new int[n];
    delete []arr;       // The memory allocated in the heap will get deleted.

    for(int i = 0; i<n ; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Answer is : " << ans << endl;

    // case 1 :
    while(true) {
        int i = 5;      // At any instant of time, the memory is only 1 byte in stack allocation here 
    }                   // memory gets released here everytime after you exit the loop.

    // case 2 : 
    while(true) {
        int *x = new int;      // At any instant of time, the memory gets increased successively here.
        delete x;              // In dynamic memory allocation, you have to manually to relaese the memory.
    }                     
        // It's not java , but c++.


    return 0;
}


// for more refernce = code studio , guide paths 

// Hw
// What is void pointers ?
// what is address typecasting.
