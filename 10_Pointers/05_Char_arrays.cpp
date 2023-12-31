#include <iostream>
using namespace std;

// Differences in int arr and char ch 

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[7] = "khushi";

    cout << "1st case = " << endl;
    cout << arr << endl;    // Address got printed
    cout << ch << endl << endl;     // content gets printed
    // cout behaviour is different here in both the cases of int arr and char ch.
    // different implementation for both of them.

    cout << "2nd case = " << endl;
    int *ptr = &arr[0];     // arr, &arr
    cout << ptr << endl;     // int array will print the address of the pointer

    char *c = &ch[0];
    cout << c << endl;      // char array will print the content of the array.
    cout << endl;

    cout << "3rd case = " << endl;
    char temp = 'k';
    char *p = &temp;
   
    cout << p << endl;        //  here the values get stored until null character doesn't appear to the cout.

    // Not to be done 
    // char character[6] = "pqrst"; 
    // char *pointer = "pqrst";

    return 0;
}