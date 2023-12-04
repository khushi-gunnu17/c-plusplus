#include <iostream>
#include <vector>
using namespace std;

// vector = dynamic data structure , 

int main() {

    vector <int> v;
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;
    cout << "Size --> " << v.size() << endl;

    cout << endl;

    cout << "Elememt at 2nd index = " << v.at(2) << endl;
    cout << "Empty or not = " << v.empty() << endl;
    cout << "First Element = " << v.front() << endl;
    cout << "Last elemsnt = " << v.back() << endl; 

    cout << endl;

    cout << "Before pop : " << endl;
    for(int i:v) {
        cout << i << " ";
    } cout << endl;

    v.pop_back();

    cout << "After pop : " << endl;
    for(int i:v) {
        cout << i << " ";
    } cout << endl;


    cout << endl;

    cout << "Before clearing the size : " << v.size() << endl;      // --> 2
    v.clear();
    cout << "After clearing the size : " << v.size() << endl;       // --> 0
    cout << "After clearing the capacity : " << v.capacity() << endl;   // --> 4
    cout << endl;

    // The capacity of the vector doesn't get reduced after clearing it by using the clear 
    // function, only its size gets emptied;

    // To get the starting iterator of the vector, we can use the .begin function and last 
    // iterator for .end function.

    vector <int> a(5,1);
    // 5--> Size of the vector
    // 1--> assigned to all the elements

    cout << "Print a : " << endl;
    for(int i:a) {
        cout << i << " " ;
    } cout << endl; 

    vector <int> last(a);    // a vector gets copied into the last vector
    cout << "Print last which is copied from a : " << endl;
    for(int i:last) {
        cout << i << " " ;
    } cout << endl;

    return 0;
}