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

class Male: protected Human {
    public:
    string colour;

    void sleep() {
        cout << "Male sleeping" << endl;
    }

    int getHeight() {
        return this -> height;
    }
};

int main() {
    Male m1;
    cout << m1.getHeight() << endl; 

    return 0;
}