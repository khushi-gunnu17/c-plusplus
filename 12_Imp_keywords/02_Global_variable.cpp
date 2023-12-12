#include <iostream>
using namespace std;

int score = 15;         // Global variable 

// BY using reference variable we can share the variable across the functions 
// or by using Global variable. But we should not use it. - Bad practice 
// because anyone can change it.

void b(int &i) {
    cout << i << endl;
    cout << score << " in b" << endl;
}

void a(int &i) {
    cout << i << endl;
    b(i);
    cout << score << " in a" << endl;
    score++;
}

int main() {

    int i = 5;
    a(i);
    cout << score << " in main" << endl;
    
    return 0;
}
