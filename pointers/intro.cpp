#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout << num << endl;
    
    cout << &num << endl;

    int *ptr = &num; 
    cout << "Value is : " << *ptr << endl;
    cout << "addres is : " << ptr << endl;

    cout << "Size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;

    // Pointer to int is created and pointing to some garbage value 
    // int *p = 0;     // Should be segmentation fault
    // cout << *p << endl;

    int i = 5;

    int *r = &i; 
    cout << "Vale of r is : " << *r << endl;
    cout << "addres is : " << r << endl;

    int *q = 0;
    q = &i;
    cout << "Value of q is : " << *q << endl;
    cout << "addres is : " << q << endl;
    
    int value = 10;
    int *pointer = &value;
    (*pointer)++;
    cout << value << endl;

    // Copying a pointer
    int *pptr = pointer;
    cout << *pptr << " - " << *pointer << endl;
    cout << pptr << " - " << pointer << endl;


    return 0;
}