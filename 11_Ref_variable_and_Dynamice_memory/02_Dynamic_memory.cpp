// --> Mostly memories are stored in the stack;
// --> Stack mmemory = Static memory allocation
// --> To use heap memory, you need to use the new keyword and it reurns the 
// address of the memory which can than be accessed through a pointer.
// --> Dynamic memory allocation


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
    cout << "The size of c : "<< sizeof(c) << endl;      // memory = 4

    // int *i = new int;       // int - memory total = 8 bytes here , but 12 , if the pointer is of 8 bytes.
    // int *arr = new int[5];    // array - memory total = 24 bytes here, but 28 if pointer is 8 bytes


    int n;
    cin >> n;
    int *arr = new int[n];     // variable size array 
    delete []arr;       // The memory allocated in the heap will get deleted.

    for(int i = 0; i<n ; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum is : " << ans << endl;

    // case 1 :
    while(true) {
        int i = 5;      // At any instant of time, the memory is only 1 byte in stack allocation here 
    }                   // memory gets released here everytime after you exit the loop.

    // case 2 : 
    while(true) {
        int *x = new int;      // At any instant of time, the memory gets increased successively here.
        delete x;              // In dynamic memory allocation, you have to manually relaese the memory.
    }                     
        // It's not java , but c++.

    return 0;
}


// for more refernce = code studio , guide paths 

// --> what is address typecasting.
/*
Address typecasting, also known as pointer typecasting, is the process of 
changing the type of a pointer from one type to another. In C and C++, 
pointers are strongly typed, meaning they are associated with a specific 
data type. However, there are situations where you might need to work 
with pointers of different types, and typecasting allows you to do that.

more on this here : https://chat.openai.com/c/6a9afec3-e359-4ff1-86ed-0fc014dccf4c
*/