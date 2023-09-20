#include <iostream>
using namespace std;

class Hero {
    
    private:
    int health;

    public:
    char level;

    void print() {
        cout << level << endl;
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
};

int main() {
    // static allocation
    Hero h1;
    h1.setHealth(50);
    h1.setLevel('B');
    cout << "Level is : " << h1.level << endl;
    cout << "Health is : " << h1.getHealth() << endl;      


    // Dynamically allocated
    Hero *h2 = new Hero;
    h2 -> setHealth(70);
    h2 -> setLevel('A');
    cout << "Level is : " << (*h2).level << endl;           // By both ways you can access the data
    cout << "Health is : " << (*h2).getHealth() << endl; 

    cout << "Level is : " << h2 -> level << endl;
    cout << "Health is : " << h2 -> getHealth() << endl; 

    return 0;
}