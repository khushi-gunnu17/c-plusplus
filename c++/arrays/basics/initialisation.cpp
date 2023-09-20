#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Print the array : ";
    for(int i=0 ; i<size ; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main () {
    int one[15] = {0} ;
    int n = 15;

    printArray(one, 15);
    //initialising all locations with one is not possible with below line.

    int two[10] = {1} ;
    n = 10;

    printArray(two, 10);

    int twoSize = sizeof(two)/sizeof(int);
    cout << twoSize << endl;

    char ch[5] = {'a','b','c','d','e'};

    cout << "Print the array : ";
    for(int i=0 ; i<5 ; i++) {
        cout << ch[i] << "  ";
    }

    return 0;
}