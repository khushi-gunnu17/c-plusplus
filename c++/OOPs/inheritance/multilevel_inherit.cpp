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

class GermanShepherd : public Dog {

};

int main() {
    GermanShepherd obj;
    obj.speak();

    return 0;
}