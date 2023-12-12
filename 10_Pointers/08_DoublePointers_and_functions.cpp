#include <iostream>
using namespace std;

void update(int **ptr2) {
    // ptr2 = ptr2 + 1;      // No change  --> pass by value , will change the value only here 

    *ptr2 = *ptr2 + 1;       // Will change 

    // **ptr2 = **ptr2 + 1;        // Will change 
}

int main() {

    int value = 5;
    int *ptr = &value;
    int **ptr2 = &ptr;

    cout << "Before values : " << endl;
    cout << value << endl;
    cout << ptr << endl;
    cout << ptr2 << endl; 

    update(ptr2);

    cout << endl;
    cout << "After values : " << endl;
    cout << value << endl;
    cout << ptr << endl;
    cout << ptr2 << endl; 

    return 0;
}