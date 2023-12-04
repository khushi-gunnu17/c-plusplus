// Class - user defined datatype
// Object - entity
// --> states/properties
// --> behaviour
// --> instance of class , an example or case

#include <iostream>
// #include "Hero.cpp"
// Accessing the class from another file
using namespace std;

class Hero {
    // properties\ Data member
    private:
    // char name[100];
    int health;

    public:
    char level;

    void print() {
        cout << level << endl;
    }

    int getHealth() {           // Getter
        return health;
    }

    char getLevel() {            // Getter, to fetch values
        return level;
    }

    void setHealth(int h, char name) {     // Setter, you can also set cnditions over here
        if(name = 'A') {
            health = h;
        }
    }

    void setLevel(char ch) {      // Setter
        level = ch;
    }
};

int main() {

    // Creation of object
    Hero Ramesh;
    cout << "Size of Ramesh is : " << sizeof(Ramesh) << endl;

    // cout << "size of : " << sizeof(Ramesh) << endl;
    // why is it showing 108 as the answer. // 105
    // --> bcoz of padding and greeding alignment  (HW)
    // Empty class size is 1 byte

    cout << "Ramesh Health is : " << Ramesh.getHealth() << endl;    

    char name = 'A';
    Ramesh.setHealth(70, name);       // Using setter
    // Ramesh.health = 70;
    // Ramesh.level = 'A';   

    cout << "Health is : " << Ramesh.getHealth() << endl;          
    // cout << "Level is : " << Ramesh.level << endl;
    return 0;
}

// Access Modifiers
// --> public
// --> private
// --> protected