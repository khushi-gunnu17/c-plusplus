#include <iostream> 
using namespace std;

// Entering a complete para or line with char array[].
int main() {
    char str[100];   
    cout << "Enter the string : ";
    cin.getline (str, 100);
    cout << str;
    return 0;
}

// What is custom delimeter and apply it here.