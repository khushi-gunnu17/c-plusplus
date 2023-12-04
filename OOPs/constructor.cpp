#include <iostream>
#include <string.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    // when we make our own default constructor here, the inbuilt constructor of the compiler gets erased or dumped.
    // also , if the copy constructor is written by us, the default one by the compiler gets deleted.
    // Default constructor
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

    // Copy constructor     // Pass by reference from the copy constructor in main 
    Hero(Hero& temp) {
        cout << "copy constructor called . " << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print() {
        cout << "Health is : " << this -> health << endl;
        cout << "Level is : " << this -> level << endl;
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
};

int main() {

    // statically
    Hero khushi(20, 'A');
    // khushi.Hero()        // Default constructor gets automatically invoked
    khushi.print();

    // dynamically
    Hero *h = new Hero;
    h -> print();

    cout << "Address of Khushi : " << &khushi << endl;     // this keyword property


    // Copy constructor 
    Hero Divya(100, 'Y');
    Divya.print();

    Hero Mansi(Divya);
    Mansi.print();

    return 0;
}

/*
Constructor =
--> Whenever you create an object, it gets invoked at the initializing time.
--> No return type.
--> No input parameter for deafault constructor.

Types Of constructor -
Default
Parameterised
Copy

This keyword
--> current object's address gets stored in this keyword.
--> this is a pointer to the current object.
*/
