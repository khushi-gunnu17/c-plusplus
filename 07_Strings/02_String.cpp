#include <iostream>
using namespace std;

int main() {

    string str;
    cout << "Enter your name : ";
    cin >> str;

    str[2] = '\0';
    cout << str; 
    
    return 0;
}

// key differences between char array and string.

/*
A character array is a collection of variables which are of character 
datatype. String is a class that is instantiated to declare strings.

Using index value you can access a character from a character array. On the 
other hand, if you want to access a particular character in a string, you 
can access it by function string’s_name.charAt(index).

As an array is not a datatype similarly a character also is not a datatype.
On the other hand, String being a class act as a reference type hence, it 
can be said String is a data type.

You can not apply any operator on a character array whereas, you can apply 
operators on String.

Being an array character array has a fixed length and its boundaries can be 
easily overrun. Where String does not have any boundaries.

Array elements are stored in a contiguous memory location hence they can be 
accessed faster than string variable.
*/