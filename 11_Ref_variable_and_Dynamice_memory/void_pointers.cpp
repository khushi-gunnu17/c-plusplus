#include <iostream>
using namespace std;

int main() {

    int num = 10;
    float pi = 3.14;
    char letter = 'A';

    // declare void pointer
    void *ptr;

    // Assign the address of an int variable to the void pointer.
    ptr = &num;
    // Dereference after casting to int
    cout << "Value of num : " << *static_cast<int*>(ptr) << endl;


    // Assign the address of a float variable to the void pointer
    ptr = &pi;
    // Dereference after casting to float
    cout << "Value of pi: " << *static_cast<float*>(ptr) << endl;


    // Assign the address of a char variable to the void pointer
    ptr = &letter;
    // Dereference after casting to char
    cout << "Value of letter: " << *static_cast<char*>(ptr) << endl;

    return 0;
}

// --> What are void pointers ?

/*
A void pointer in C and C++ is a special type of pointer that is used to 
point to data of unknown type. It is declared using the void keyword, and 
it can be used to store the address of any data type. However, because it 
doesn't have a specific type associated with it, you cannot directly 
dereference a void pointer. Instead, you must first cast it to the 
appropriate type before dereferencing.

It's important to use void pointers carefully, as improper use can lead 
to undefined behavior. They are often used in scenarios where the type of 
data is determined at runtime or in generic programming contexts.
*/