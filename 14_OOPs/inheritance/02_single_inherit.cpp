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
    
};

int main() {
    Dog d;
    d.speak();
    return 0;
}