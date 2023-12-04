// first in = first out (concept)

#include <iostream>
#include <queue>
using namespace std;

int main () {

    queue <string> q;
    q.push("Khushi");
    q.push("Kumari");
    q.push("Sharma");
    
    cout << "Size before pop : " << q.size() << endl;
    cout << "First element : " << q.front() << endl;
    q.pop();
    cout << "First element : " << q.front() << endl;

    cout << "Size after pop : " << q.size() << endl;

    // complexities of all the operations = O(1)
    
    return 0;
}