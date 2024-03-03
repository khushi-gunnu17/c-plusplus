// In map, the data is stored in the form of key and values.
// A key points to only one value, but one value can get pointed by two or more keys.
// All keys are unique.

#include <iostream>
#include <map>
using namespace std;

int main() {
    map <int, string> m;
    m[1] = "Khushi";
    m[13] = "kumari";
    m[2] = "Sharma";

    for(auto i:m) {             // Sorted order in case of maps
        cout << i.first << " ";
    } cout << endl; 
    cout << endl;

    // but in unordered map, it need not to be sorted

    m.insert({5, "Raizada"});

    cout << "Before erasal of 13 : " << endl;
    for(auto i:m) {
        cout << i.first << " --> " << i.second << endl;
    } cout << endl;

    cout << "Finding 13 --> " << m.count(13) << endl;
    cout << endl;

    m.erase(13);
    cout << "After erasal of 13 : " << endl;
    for(auto i:m) {
        cout << i.first << " --> " << i.second << endl;
    }

    cout << endl;

    // Insert , erase, find and count complexities of all these are O(log n).
    // in unordered map compl. is O(1).

    auto it = m.find(1);
    for(auto i = it ; i != m.end() ; i++) {
        cout << (*i).first << endl;
    } cout << endl;

    // If 13 wasn't erased earlier , it would have given 5, 13 as the answer

    return 0;
}