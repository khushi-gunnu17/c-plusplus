// macro - A piece of code in a program that is replaced by the value of macro. 
// #define - macros can be created by this

#include <iostream>
using namespace std;

#define PI 3.14     // Macro created     there is no storage memory here.

int main() {

    int r = 5;

    double pi = 3.14;
    pi += 1;         // modifiable 
    // PI = PI + 1;    // not modifiable 

    double Area = PI * r * r;
    cout << "Answer is : " << Area << endl;

    return 0;
}

// HW = GeeksForGeeks article about it - read for 10 min atleast.