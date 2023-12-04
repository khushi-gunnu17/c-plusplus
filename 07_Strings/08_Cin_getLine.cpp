#include <iostream> 
using namespace std;

// Entering a complete para or line with char array[].
int main() {
    char str[100];   

    cout << "Enter the string : ";
    cin.getline (str, 100);

    cout << "The entire string is : " << str;
    return 0;
}

// What is custom delimeter and apply it here.

/*
In C++, the getline function is often used to read an entire line from the 
input stream (e.g., standard input) and store it in a character array. By 
default, getline considers a newline character ('\n') as the delimiter, 
which means it stops reading when it encounters a newline character.

If you want to use a custom delimiter (a character that signals the end of 
the input), you can use the overloaded version of getline that takes a 
delimiter as its third argument. The syntax is as follows:

istream& getline (istream& is, char* str, char delim);

Here, delim is the delimiter character. The getline function will stop 
reading when it encounters this character or when it reaches the maximum 
number of characters specified.

*/


// Here's how you can modify your code to use a custom delimiter:


#include <iostream>
using namespace std;

int main() {
    char str[100];
    
    cout << "Enter the string : ";
    // Use a custom delimiter (e.g., '#') to read the input until '#' is encountered.
    cin.getline(str, 100, '#');

    cout << "The string until '#' is : " << str;
    return 0;
}
