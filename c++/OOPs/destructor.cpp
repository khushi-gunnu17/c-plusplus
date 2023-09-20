#include <iostream>
#include <string.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        name = new char[100];
        cout << "Constructor called . " << endl;
    }

    // Parameterised constructor
    Hero(int health, char level) {
        cout << "this -> " << this << endl;
        this -> level = level;
        this -> health = health;
    }

    // Copy constructor   
    // In deep copy case, entirely different copy is created.
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;

        cout << "copy constructor called . " << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print() {
        cout << "Name is : " << this -> name << endl;
        cout << "Health is : " << this -> health << endl;
        cout << "Level is : " << this -> level << endl;
        cout << endl;
    }

    int getHealth() {           // Getter
        return health;
    }

    char getLevel() {            // Getter
        return level;
    }

    void setHealth(int h) {     // Setter
       health = h;
    }

    void setLevel(char ch) {      // Setter
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this -> name, name);
    }

    ~Hero() {
        cout << "destructor called ." << endl;
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
Destructor = De-allocation of memory.
--> name same as the class.
--> No return type.
--> No input parameters.
--> when a class is created, automatically a destructor also gets created.
*/

/*
HW = 
Const keyword 
--> in functions
--> Object creation / Member data type

what is Initialisation list ?
*/