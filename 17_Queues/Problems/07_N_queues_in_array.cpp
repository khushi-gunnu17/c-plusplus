#include <bits/stdc++.h>
using namespace std;

class NQueue{
private :
    int s;  // size of the array
    int n;  // No of queues in an array
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;

public:
    // Initialize your data structure.
    NQueue(int n, int s){
        this -> n = n;
        this -> s = s;

        front = new int[n];
        rear = new int[n];
        for (int i = 0 ; i<n ; i++) {
            front[i] = -1;
            rear[i] = -1;
        }
        
        next = new int[s];
        for (int i = 0 ; i<s ; i++) {
            next[i] = i + 1;
        }
        next[s-1] = -1; 

        arr = new int[s];
        for (int i = 0 ; i<s ; i++) {
            arr[i] = 0;
        }
        freespot = 0;
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        int data = x;
        int queue = m;

        // overflow condition check
        if (freespot == -1) {
            cout << "No empty space is available for the enqueue operation" << endl;
            return false;
        }

        // finding first free index
        int index = freespot;

        // updating the freespot;
        freespot = next[index];

        // check whether the first element is free or not ?
        if (front[queue - 1] == -1) {
            front[queue - 1] = index;
        } else {
            // linking the new element to the prev index
            next[rear[queue - 1]] = index;
        }

        // update next 
        next[index] = -1;

        // updating rear
        rear[queue - 1] = index;

        // push element
        arr[index] = data;

        return true;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        int queue = m;

        // underflow checking 
        if (front[queue - 1] == -1) {
            cout << "queue is already empty !" << endl;
            return -1;
        }

        // finding index to pop
        int index = front[queue - 1];
        int poppedValue = arr[index];
        arr[index] = 0;

        // make the front point to the next available value
        front[queue - 1] = next[index];

        // managing the free slots
        next[index] = freespot;
        freespot = index;

        return poppedValue;
    }

    void printArray() {
        cout << "Array elements are : ";
        for (int i = 0; i<s ; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    int n;
    cout << "Enter the number of queues in an array : ";
    cin >> n;

    int s;
    cout << "Enter the size of the array : ";
    cin >> s;

    NQueue Nq(n, s);

    Nq.enqueue(17, 1);
    Nq.enqueue(24, 2);
    Nq.enqueue(78, 2);
    Nq.enqueue(63, 3);
    Nq.enqueue(90, 1);

    cout << "Before the dequeue op : ";
    Nq.printArray();

    int poppedValue = Nq.dequeue(1);

    cout << "After popping the value " << poppedValue << endl;
    Nq.printArray();

    return 0;
}