// You can perform both insertion or deletion to both the front and 
// end of the array.

// It doesn't have contiguous memory locations , the data is stored 
// in different static arrays and the data is tracked that in which 
// arrray it is stored.

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque <int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "The deque is : ";
    for(int i:d) {
        cout << i << " ";
    } cout << endl;

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
    cout << "Last elemsnt = " << d.back() << endl; 

    cout << endl;

    cout << "Before erase : " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "After erase : " << d.size() << endl;

    // Memory allocated to deque remains same even after using the erase function.
    // the function only reduces the size of the arrray.

    for(int i:d) {
        cout << i << endl;
    }

    return 0;
}