#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout << "Address of i is : " << ptr1 << endl;
    cout << "Address of ptr1 is : " << &ptr1 << endl;
    cout << "and address : " << ptr2 << endl;

    cout << "Value at ptr3 is : " << *ptr3 << endl;

    cout << "Value of i : " << endl;
    cout << i << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;
    cout << ***ptr3 << endl;

    return 0;
}