// You can perform both insertion or deletion to both the front and 
// end of the array.

// It doesn't have contiguous memory locations , the data is stored 
// in different fixed static arrays and the data is tracked that in which 
// arrray it is stored.

// Dynmaic in nature.

// Deque = Double ended queue 

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque <int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);

    cout << "The deque is : ";
    for(int i:d) {
        cout << i << " ";
    } cout << endl;
    cout << endl;

    // d.pop_back();
    // cout << "Now, the deque is after pop : ";
    // for(int i:d) {
    //     cout << i << " ";
    // } cout << endl;

    // d.pop_front();
    // cout << "Now, the deque is after front pop : ";
    // for(int i:d) {
    //     cout << i << " ";
    // }

    cout << "Elememt at 1st index = " << d.at(1) << endl;
    cout << "Empty or not = " << d.empty() << endl;
    cout << "First Element = " << d.front() << endl;
    cout << "Last element = " << d.back() << endl; 

    // for having iterator, we can use the .begin and .end function.

    cout << endl;

    cout << "Before erase, size is  : " << d.size() << endl;
    d.erase(d.begin(), d.begin()+2);    // next element is not included.
    cout << "After erase, size is : " << d.size() << endl;

    // Memory allocated to deque remains same even after using the erase function.
    // the function only reduces the size of the arrray.

    for(int i:d) {
        cout << i << " ";
    }

    return 0;
}