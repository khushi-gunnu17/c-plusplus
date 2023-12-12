// The goto statement is used to alter the normal sequence of the program execution by transferring control
//  to some other part of the programm.

// It can be used to jump from anwhere to anywhere within a function.

/*
Syntax : 
    goto label;         or              label:
                      

    label:                              goto label;
*/

#include <iostream>
using namespace std;

// int main() {
//     int number;
//     cin >> number;
    
//     if(number % 2 == 0) {
//         goto printEven;
//     } else {
//         goto printOdd;
//     }

//     printEven : 
//         cout << "Even number .";
//         return 0;

//     printOdd :
//         cout << "Odd number . ";
//         return 0;
// }

int main() {
    int num = 1;
    print :
    cout << num << " ";
    num++;

    if(num<=5) {
        goto print;
    }

    return 0;
}
