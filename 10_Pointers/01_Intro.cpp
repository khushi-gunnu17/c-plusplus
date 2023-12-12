#include <iostream>
using namespace std;

/*
Symbol Table is an important data structure created and maintained by 
the compiler in order to keep track of semantics of variables i.e. it 
stores information about the scope and binding information about names, 
information about instances of various entities such as variable and 
function names, classes, objects, etc.
*/

int main() {
    int num = 5;
    cout << num << endl;
    
    // Address is (&)
    cout << "The address of num is : " << &num << endl << endl;

    // Pointer stores the address.      
    // (*) = dereference operator.
    int *ptr = &num; 
    cout << "Value is : " << *ptr << endl;
    cout << "address is : " << ptr << endl << endl;
    // The pointer stores the address, so it's value is always gonna be 8 or , either 4 depending on the system.
    // Why my pointer size is coming as 4 ?

    cout << "Size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl << endl;

    // Pointer to int is created and pointing to some garbage value 
    // int *p;      // bad practice , risky one 
    // cout << *p << endl;

    // instead do this
    // int *p = 0;     // Null pointer, Should be segmentation fault

    
    int i = 5;

    int *r = &i; 
    cout << "Vale of r is : " << *r << endl;
    cout << "address is : " << r << endl << endl;

    int *q = 0;    
    q = &i;
    cout << "Value of q is : " << *q << endl;
    cout << "address is : " << q << endl << endl;

    
    int value = 10;
    int *pointer = &value;
    (*pointer)++;
    cout << value << endl << endl;

    // Copying a pointer
    int *pptr = pointer;
    cout << *pptr << " -> " << *pointer << endl;
    cout << pptr << " -> " << pointer << endl << endl;


    return 0;
}