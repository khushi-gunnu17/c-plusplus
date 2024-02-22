#include <iostream>
using namespace std;

class Animal {
    public:

    int age;
    int height;

    void bark() {
        cout << "Barking." << endl;
    }
};

class Human {
    public:
    string colour;
    
    void speak() {
        cout << "Speaking." << endl;
    }
};

class Hybrid : public Human, public Animal {

};

int main() {
    Hybrid obj;
    obj.speak();
    obj.bark();
    
    return 0;
}