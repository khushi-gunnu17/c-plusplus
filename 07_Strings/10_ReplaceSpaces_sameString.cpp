#include <iostream>
#include <cstring>
using namespace std;

void replaceSpaces(char str[]) {
    int length = strlen(str);

    for(int i=0 ; i<length ; i++) {
        if(str[i] == ' ') {
            // shift characters to the right to make space for '@40'.
            for(int j = length + 2; j > i+2 ; j--) {
                str[j] = str[j-2];
            }

            // insert @40
            str[i] = '@';
            str[i+1] = '4';
            str[i+2] = '0';

            // Update the length after adding @40.
            length += 2;
        }
    }
}

int main() {

    char arr[50];
    cout << "Enter the sentence : ";
    cin.getline(arr, 50);

    replaceSpaces(arr);

    cout << arr << endl;

    return 0;
}

// in place 