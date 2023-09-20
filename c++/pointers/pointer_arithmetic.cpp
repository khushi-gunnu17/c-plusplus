#include <iostream> 
using namespace std;

int main() {
    int num = 100;
    int *ptr = &num;
    
    cout << (*ptr)++ << endl;   // *ptr = *ptr + 1;

    cout << "Addrress before : " << ptr << endl;
    ptr = ptr + 1;
    cout << "Addrress before : " << ptr << endl;
   
    return 0;
}