#include <iostream>
using namespace std;

int main() {
    int arr[10] = {2,4,6,8,10} ;
    cout << "Addresses of first memory block is : " << arr << endl;  
    cout << "Addresses of first memory block is : " << &arr[0] << endl;

    cout << "Value at first location : " << *arr << endl; // same as arr[0]
    cout << "value of first location edited : " << *arr + 1 << endl;   // 3

    cout << "Value at second location : " << *(arr + 1) << endl; 

    int i = 3;
    cout << arr[i] << endl;     // same 
    cout << i[arr] << endl;


    return 0;
}

// arr[i] = *(arr + i)
// i[arr] = *(i + arr)