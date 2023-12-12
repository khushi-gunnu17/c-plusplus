#include <iostream> 
using namespace std;

int main() {

    int num = 100;
    int *ptr = &num;
    
    cout << (*ptr)++ << endl;   // *ptr = *ptr + 1;
    cout << *ptr << endl << endl;

    cout << "Addrress before : " << ptr << endl;
    ptr = ptr + 1;
    cout << "Addrress after : " << ptr << endl << endl;     // +4 bytes 
   
    return 0;
}

// coding ninjas 