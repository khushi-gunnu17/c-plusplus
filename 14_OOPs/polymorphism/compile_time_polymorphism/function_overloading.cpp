// polymorphism = existing in different forms.
// Compile time poly. is also known as static polymorphism.

#include <iostream>
using namespace std;

class A {
    public :
    void sayHello() {
        cout << "Hello khushi." << endl;
    }

    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }

    // Function cannot be overloaded with only different return type, you have to give different arguments also.
    int sayHello(string name, int age) {
        cout << "Hello " << name << " " << age << endl;
        return 1;
    }
};

int main() {
    A obj;
    obj.sayHello();
    obj.sayHello("mansi");
    obj.sayHello("nanu", 11);
    return 0;
}