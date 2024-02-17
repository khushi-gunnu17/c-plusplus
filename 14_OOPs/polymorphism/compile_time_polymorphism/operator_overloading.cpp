#include <iostream>
using namespace std;

class A {

};

class B {
    public:
    int a;
    int b;

    int add() {
        return a + b;
    }

    // Operator overloaded
    void operator+ (B &obj) {
        // int value1 = this -> a;     // Current object
        // int value2 = obj.a;     // Input object
        // cout << "Output : " << value2 - value1 << endl;

        cout << "Hello khushi. " << endl;
    }

    void operator() () {
        cout << "I am a bracket. " << this -> a << endl;
    }
};

int main() {
    B obj;
    obj.a = 1;
    obj.b = 2;

    cout << obj.add() << endl;

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();
    return 0;
}