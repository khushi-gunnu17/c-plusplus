#include <iostream>
using namespace std;

class Animal {
    public:

    int age;
    int height;

    void bark() {
        cout << "I am an animal. " << endl;
    }
};

class Human {
    public:
    string colour;
    
    void speak() {
        cout << "I am a human." << endl;
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