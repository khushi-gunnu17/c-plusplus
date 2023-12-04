#include <iostream>
using namespace std;

int main() {
    int temp[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Size of array : " << sizeof(temp) << endl;

    int *ptr = temp;

    cout << *temp << endl;
    cout << &temp << endl; 

    cout << "Size of address of pointer : " << sizeof(ptr) << endl;
    cout << "Size of value present at the pointer : " << sizeof(*ptr) << endl;
    cout << "Size of address of pointer : " << sizeof(&ptr) << endl;

    int a[20] = {1,2,3,4,5};
    cout << &a[0] << endl;      // same thing
    cout << &a << endl;
    cout << a << endl;

    cout << "Printing addresses of pointer ptr2 : " << endl;
    int *ptr2 = a;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << &ptr2 << endl;

    int arr[10] = {0};
    // arr = arr + 1;          // This cannot be done 

    int *ptr = arr;
    ptr = ptr + 1;          // But this can

    return 0;
}

// The content of symbol table cannot be changed ever.