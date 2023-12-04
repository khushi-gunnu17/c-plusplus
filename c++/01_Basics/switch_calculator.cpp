#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout << "Enter the value of a and b : " << endl;
    cin >> a >> b;

    char op;
    cout << endl;
    cout << "Enter the value of op : ";
    cin >> op;

    switch(op) {
        case '+' : cout << a+b << endl;
                    break;

        case '-' : cout << (a-b) << endl;
                    break;

        case '*' : cout << (a*b) << endl;
                    break;

        case '%' : cout << (a*b) << endl;
                    break; 

        default: cout << "this is not a valid op . " << endl;
        
    }
    return 0; 

}


// the use of continue is not valid in the switch case.

