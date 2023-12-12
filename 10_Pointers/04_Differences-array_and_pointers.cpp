#include <iostream>
using namespace std;

int main() {
    int temp[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Size of array : " << sizeof(temp) << endl << endl;

    int *ptr = temp;

    cout << *temp << endl;
    cout << &temp << endl << endl; 

    cout << "Size of address of pointer : " << sizeof(ptr) << endl;
    cout << "Size of value present at the pointer : " << sizeof(*ptr) << endl;
    cout << "Size of address of pointer : " << sizeof(&ptr) << endl << endl;



    int a[20] = {1,2,3,4,5};
    cout << &a[0] << endl;      // same thing below 
    cout << &a << endl;
    cout << a << endl << endl;

    cout << "Printing addresses of pointer ptr2 : " << endl;
    int *ptr2 = a;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << &ptr2 << endl << endl;

    int arr[10] = {0};
    // arr = arr + 1;          // This cannot be done 

    int *ptr3 = arr;
    cout << ptr3 << endl;   // But this can
    ptr3 = ptr3 + 1;          
    cout << ptr3 << endl;

    return 0;
}

// The content of symbol table cannot be changed.