// strings in c++ --> one dimensional character arrays 
// Null character --> use as a terminator (\0), ASCII value = 0.
// cin stops the execution when you give it tab, space, new line character or enter.
// cplusplus reference = string and charArrays 

#include <iostream>
using namespace std;

void reverse(char name[], int n) {                 // Reversing a string
    int s = 0;
    int e = n-1;

    while(s<=e) {
        swap(name[s++], name[e--]);
    }    
    return;
}

int getLength(char name[]) {                    // Length of the string
    int count = 0;
    for(int i=0 ; name[i] != '\0' ; i++) {
        count++;
    }
    return count;
}

int main() {

    char name[20];      // char array 

    cout << "Enter your name : ";
    cin >> name;
    // name[2] = '\0';
    cout << endl;

    cout << "your name is : " << name << endl;

    int len = getLength(name);
    cout << "Length of the string = " << len << endl;

    reverse(name, len);
    cout << "your name is : " << name << endl;
    
    return 0;
}