// All the elements should be unique in set.
// It's implementation is done by BST.
// We cannot modify the elements.
// Elements are returned in sorted order.
// Set is slower than unordered set and when we fetch items from unordered set, they are not in a sorted manner.

#include <iostream>
#include <set>
using namespace std;

int main() {

    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    // complexity of insert = O(log n)
    
    for(auto i:s) {         // sorted order in case of sets 
        cout << i << " ";
    } cout << endl;

    // Even if the no. are presented twice or a number of times, they will only be represented a single time in the output.


    // Erase

    // s.erase(s.begin());
    // for(auto i:s) {
    //     cout << i << " ";
    // } cout << endl;


    set <int> :: iterator it = s.begin();
    it++;       

    s.erase(it);        // index no. 1
    for(auto i:s) {
        cout << i << " ";
    } cout << endl;

    // Count -- tells if the element is present or not.
    cout << "5 is present or not : " << s.count(5) << endl;


    // Find 
    set <int> :: iterator itr = s.find(5);      // we get the reference here of 5 
    cout << "Value present at itr : " << *itr << endl;

    for(auto it = itr; it!=s.end() ; it++) {
        cout << *it << " ";
    } cout << endl;

    // Insert, find, erase and count all funct. complexities are O(log n)
    // while size, begin, end, empty are of O(1) complexity

    return 0;
}