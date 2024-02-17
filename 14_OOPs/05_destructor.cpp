/*
Destructor = De-allocation of memory.
--> name same as the class.
--> No return type.
--> No input parameters.
--> when a class is created, automatically a destructor also gets created.
*/

#include <iostream>
#include <string.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    // constructor
    Hero() {
        name = new char[100];
        cout << "Constructor called . " << endl;
    }

    // desctructor 
    ~Hero() {
        cout << "Destructor called ." << endl;
    }
};

int main() {
    // Statically
    Hero a;
    // For static memory, destructor gets called automatically.

    // Dynamically
    Hero *b = new Hero();
    // For dynamic memory, manually destructor needs to be called by delete keyword.
    delete b;

    return 0;
}

/*
HW = 
Const keyword 
--> in functions
--> Object creation / Member data type

what is Initialisation list ?
*/