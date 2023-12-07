// strings in c++ --> one dimensional character arrays 
// Null character --> use as a terminator (\0), ASCII value = 0.
// cin stops the execution when you give it tab, space, new line character or enter.
// cplusplus reference = string and charArrays 

#include <iostream>
#include <cstring>
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

    // int len = getLength(name);
    int len = strlen(name);
    cout << "Length of the string = " << len << endl;

    reverse(name, len);
    cout << "your name is : " << name << endl;
    


    // comparing the char array.
    char s1[10] = "khushi";

    int compare = strcmp(s1, name);
    if(compare) {
        cout << "the strings are equal." << endl;
    } else {
        cout << "the strings are not equal." << endl;
    }


    // coying in the char array
    char s2[10];

    strcpy(s2, name);
    cout << "The value of the s2 string is : " << s2 << endl;
    return 0;
}