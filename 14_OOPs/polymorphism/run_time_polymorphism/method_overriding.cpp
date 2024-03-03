// Run time poly. is also known as dynamic polymorphism.
// function / Method overriding
// Run time poly. is depended on inheritance 
// func name and arg must be same 

#include <iostream>
using namespace std;

class Animal {
    public:

    int age;
    int height;

    void speak() {
        cout << "I am an animal. " << endl;
    }
};

class Dog : public Animal {
    public :
    void speak() {          // First priority
        cout << "I am a dog. " << endl;
    }
};

int main() {

    Dog obj;
    obj.speak();

    return 0;
}