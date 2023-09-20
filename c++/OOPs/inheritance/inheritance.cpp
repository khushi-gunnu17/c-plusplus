#include <iostream>
using namespace std;

class Human {
    public:
    int age;
    int height;
    int weight;
    
    int getAge() {
        return this -> age;
    }

    void setWeight(int w) {
        this -> weight = w;
    }
};

class Male: public Human {
    public:
    string colour;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
};

int main() {
    Male object1;
    object1.age = 10;
    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;

    cout << object1.colour << endl;

    object1.sleep();

    object1.setWeight(56);

    cout << object1.weight << endl;

    return 0;
}

/*
Access modifiers = >
public 
private
protected = kind of similar to private but its data members can be accesible to its child class.
*/

/*
Types of inheritance =
--> single
--> multilevel
--> multiple
--> hybrid 
--> heirarchical
*/