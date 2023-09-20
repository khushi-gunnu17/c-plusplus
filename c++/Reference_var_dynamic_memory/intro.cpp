// Same memory but different names

#include <iostream>
using namespace std;

// Pass by refernce      // It will take the same memory.
void update(int &n) {
    n++;
}

// Return by refernce       // Will return warning, but it's not giving here.
int& fun(int a) {          // It's working here, but it's a bad practice.
    int num = a;
    int &ans = num;
    return ans;
}

// why bad ?
/*
maybe cannot acces the local variables here. i.e., a and num
maybe things are being changed in something else.
*/

// Same thing with the pointers.   // bad
int* func(int n) {
    int *ptr = &n;
    return ptr;
}

int main() {
    int i = 5;
    int &j = i;   // creating a reference variable 

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    cout << i << endl;

    int n = 5;
    cout << "Before : " << n << endl;
    update(n);

    cout << "After : " << n << endl;


    cout << fun(n) << endl;
    cout << "Output";
    cout << func(n) << endl;        // Working here, but should return an error 


    int m;
    cin >> m;
    int arr[m];     // Bad practice  = the size should be given at compile time only and not at run time.

    // Why bad ?
    /*
    when memory is initialised in the compiler it takes two types of memory: one stack and one heap.
    stack is small comparatively to the heap.
    So, when you provide memory in the runtime in an array, the program may crash, depending on the compiler,
    as maybe it has taken stack memory first and now it cannot hold your runtime memory as it may be bigger for stack.
    */

    return 0;
}