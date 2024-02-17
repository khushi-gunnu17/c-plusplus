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
    // When, you write a class, an in-built copy cnstructor also gets created.

    // Default constructor
    Hero() {
        name = new char[100];
        cout << "Simple/Default Constructor called . " << endl;
    }

    // Parameterised constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        cout << "this -> " << this << endl;
        this -> level = level;
        this -> health = health;
    }

    // our own written Copy constructor     // Pass by reference from the copy constructor in main 
    // Hero(Hero &temp) {
    //     cout << "copy constructor called . " << endl;
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }
    // when we write our own copy constructor, the default copy contructor gets deleted/

    void print() {
        cout << "Health is : " << this -> health << endl;
        cout << "Level is : " << this -> level << endl;
    }

    void setName(char name[]) {
        strcpy(this -> name, name);
    }
};



int main() {

    // statically created
    Hero khushi(20, 'A');
    // khushi.Hero()        // Default constructor gets automatically invoked

    khushi.print();
    cout << endl;

    cout << "Address of Khushi : " << &khushi << endl;     // this keyword property
    cout << endl;


    // dynamically
    Hero *h = new Hero(11, 'A');
    h -> print();
    cout << endl;


    // Copy constructor 
    cout << "Divya's Parameters : " << endl;
    Hero Divya(100, 'Y');
    Divya.print();
    cout << endl;


    cout << "Mansi's parameters : ";
    Hero Mansi(Divya);  
    Mansi.print();

    return 0;
}