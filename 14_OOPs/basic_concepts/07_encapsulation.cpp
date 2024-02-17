// Wrapping up data members and its related functionality into a single entity(class) is called encaspsulation.
// Fully encapsulated class : all data members are marked private.
// Information hiding / Data Hiding

#include <iostream>
using namespace std;

class Student {
    private:
    string name;
    int height;
    int age;

    public:
    int getAge() {
        return this->age;
    }
};

int main() {

    Student first;

    return 0;
}

/*
Advantages of encapsulation :
--> Data hiding - provides security.
--> If we want, we can make class read only by using getter and not setter. 
--> Code reusabilty.
--> unit testing.
*/