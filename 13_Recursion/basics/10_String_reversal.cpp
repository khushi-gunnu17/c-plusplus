#include <iostream>
using namespace std;

// Pass by refernce 
void reverseString(string &str, int i, int j) {
    // Base case
    if(i>j) {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive function
    reverseString(str, i, j);
}

int main() {
    string name = "khushi";
    
    reverseString ( name, 0, name.length()-1 );
    cout << name << endl;
    return 0;
}

// Optimise this code using one pointer approach