// Queue follows a FIFO (First In First Out) or LILO (Last In Last Out) principle

#include <bits/stdc++.h>
using namespace std;

int main() {

    // Creation of Queue
    queue<int> q;

    q.push(15);
    q.push(36);
    q.push(28);
    q.push(49);

    cout << "Front of queue is : " << q.front() << endl;
    cout << "Rear of queue is : " << q.back() << endl;

    cout << "Size of queue is : " << q.size() << endl;

    q.pop();

    cout << "Size of queue after popping is : " << q.size() << endl;

    if(q.empty()) {
        cout << "Queue is empty !" << endl;
    } else {
        cout << "Queue is not empty !" << endl;
    }

    cout << "The queue values are : ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}