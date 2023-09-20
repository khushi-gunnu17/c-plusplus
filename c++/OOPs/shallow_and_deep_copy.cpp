// Default copy constructor creates shallow copy. (execution in main).
// copy constructor in functions above main creates deep copy

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
};

int main() {

    Hero hero1;
    hero1.setHealth(50);
    hero1.setLevel('R');
    char name[10] = "khushi";
    hero1.setName(name);

    // hero1.print();

    // Use default copy constructor here for shallow copy otherwise deep will be printed.
    Hero hero2(hero1);
    // Hero hero2 = hero1;      // same 
    // hero2.print();

    // In shallow copy same memory gets accessed if you are using the same memory address for the variables, like through pointers.
    hero1.name[0] = 'G';
    hero1.level = 'T';
    hero1.print();
    hero2.print();


    // Copy assignment operator 
    hero1 = hero2;
    hero1.print();      // hero2 values will be printed here
    hero2.print();

    return 0;
}

/*
In copy assignment operator : 
a = b;
means -->
a.health = b.health;
a.level = b.health;
a.name = b.name;
*/