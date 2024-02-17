// Static keyword creates such a data member which belongs to a class and doesn't need to be called in the main function. it gets called directly with the initialisation of the object.
// Even if we have not created any object, we can access the static data member.

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

    // static function = can only access static members
    static int random() {
        return timeToComplete;
    }
};

// initializing the static data member.
int Hero :: timeToComplete = 5;

int main() {
    
    cout << Hero :: timeToComplete << endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10;

    cout << "a : " << a.timeToComplete << endl;
    cout << "b : " << b.timeToComplete << endl << endl;

    cout << "Accessing static function : " << endl;
    cout << Hero::random() << endl;

    return 0;
}

// In static functions -
// --> objects don't need to be created.
// --> it doesn't have a static keyword.
// --> they don't have this keyword as this is a pointer to the current object and statis has no relation with objects.
// --> they can only access static members.