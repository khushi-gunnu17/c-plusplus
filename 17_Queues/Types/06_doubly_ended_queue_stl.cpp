// doubly ended queue using stl

/*

push_front()
push_back()
pop_front()
pop_back()

*/

#include <iostream>
#include <queue>
using namespace std;

int main() {

    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << "The front value is : " << d.front() << endl;
    cout << "The back value is : " << d.back() << endl;

    d.pop_front();

    cout << "The front value after popping is : " << d.front() << endl;
    cout << "The back value is : " << d.back() << endl;
    
    d.pop_back();

    if(d.empty()) {
        cout << "Queue is empty !" << endl;
    } else {
        cout << "Queue is not empty !" << endl;
    }

    return 0;
}