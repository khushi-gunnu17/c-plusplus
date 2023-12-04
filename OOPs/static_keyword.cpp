// Static keyword creates such a data member which belongs to a class and doesn't need to be called in the main function. it gets called directly with the initialisation of the object.

#include <iostream>
#include <string.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

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

    static int random() {
        return timeToComplete;
    }

    ~Hero() {
        cout << "destructor called ." << endl;
    }
};

int Hero :: timeToComplete = 5;

int main() {
    
    cout << Hero :: timeToComplete << endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 19;

    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    cout << "Accessing static function : " << endl;
    cout << Hero::random() << endl;

    return 0;
}

// In static functions -
// --> objects don't need to be created.
// --> it doesn't have a static keyword.
// --> they can only access static members.