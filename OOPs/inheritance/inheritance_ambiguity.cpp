#include <iostream>
using namespace std;

class A {
    public:
    void func() {
        cout << "I am class A. " << endl;
    }
};

class B {
    public:
    void func() {
        cout << "I am class B. " << endl;
    }
};

class C : public A, public B {

};

int main() {
    C obj;
    // obj.func();      // Will give error

    obj.A :: func();
    obj.B :: func();
    return 0;
}