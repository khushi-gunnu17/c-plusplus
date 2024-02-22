// Combination of more than 1 type of inheritance.

#include <iostream>
using namespace std;

class A {
    public :
    void funcA() {
        cout << "Inside Function A." << endl;
    }
};

class B : public A {
    public :
    void funcB() {
        cout << "Inseide Function B." << endl;
    }
};

class D {
    public : 
    void funcD() {
        cout << "Inside function D." << endl;
    }
};

class C : public A , public D {
    public :
    void funcC() {
        cout << "Inside function C." << endl;
    }
};

int main() {

    C obj;
    obj.funcA();

    return 0;
}