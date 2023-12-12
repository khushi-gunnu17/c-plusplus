#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;

    cout << "Address of i is : " << ptr1 << endl;
    cout << "Address of ptr1 is : " << &ptr1 << endl;
    cout << "and : " << ptr2 << endl << endl;

    cout << "Value at ptr3 is : " << *ptr3 << endl << endl;

    cout << "Value of i : " << endl;
    cout << i << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;
    cout << ***ptr3 << endl;

    return 0;
}

// why int * and not something like poniter * ?
// --> which type of data it is.
// --> how much bytes to be considered ?