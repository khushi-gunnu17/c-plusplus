#include <iostream>
using namespace std;

void print(int *ptr) {
    cout << ptr << endl;
    // cout << *ptr << endl;
}

// call by refernce for the actual value but not pointer.
void update(int *ptr) {
    ptr = ptr + 1;
    // cout << "Inside : " << ptr << endl;
    // *ptr = *ptr + 1;
}

int getSum(int arr[], int n) {      // int *arr   =  passed as a pointer and not an array

    cout << endl << "Size of the array Inside the function is : " << sizeof(arr) << endl;       // Will give the size of the pointer and not array

    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int value = 5;
    int *ptr = &value;

    print(ptr); 
    cout << endl;

    update(ptr);    // Pointer cannot be updated, but its value can in this method 
    cout << "After update : " << endl;
    print(ptr); 

    int arr[5] = {1,2,3,4,5};
    cout << endl << "Size of the array outside is : " << sizeof(arr) << endl;

    cout << "Sum is : " << getSum(arr, 5) << endl;
    //  we can send part of the array to the function using it.
    cout << "Sum is : " << getSum(arr + 3, 3) << endl;     

    return 0;
}

// Benefits of passing array as a function.
/*
    we can send part of the array to the function using it.
    EX :- int getSum(*(arr + 3), int n).
*/