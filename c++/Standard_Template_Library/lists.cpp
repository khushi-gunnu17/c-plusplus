// Lists is made using double linked lists (or implemented).
// Double linked lists has two pointers (both front and back).
// It cannot have direct acacess of elements.

#include <iostream>
#include <list>
using namespace std;

int main () {

    list <int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l) {
        cout << i << " ";
    } cout << endl;

    // Begin , end , empty , back are other functions of list.
    // Time Complexity : O(1);

    // Erase's time complexity is O(n).

    l.erase(l.begin());
    cout << "After erase : " ;
    for(int i:l) {
        cout << i << " ";
    } cout << endl;

    cout << "Size of list : " << l.size() << endl;

    list <int> n(l);        // l gets copied
    for(int i:n) {
        cout << i << " ";
    } cout << endl;

    list <int> k(5,100);    // initialising
    for(int i:k) {
        cout << i << " ";
    } cout << endl;


    return 0;
}