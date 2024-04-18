#include <iostream>
using namespace std;

class Deque {
private :
    int *arr;
    int front;
    int rear;
    int size;
    int currentSize;

public:
    // Initialize your data structure.
    Deque(int n) {
        size = n;
        arr = new int[size];    
        front = -1;
        rear = 0;
        currentSize = 0;
    }

    // Destructor to free allocated memory
    ~Deque() {
        delete[] arr;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x) {
        // check full or not.
        if ( isFull() ) {
            return false;
        } 
        else if (isEmpty()) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = size - 1;
        } 
        else {
            front--;
        }
        arr[front] = x;
        currentSize++;
        return true;
    }


    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x) {
        // check full or not.
        if ( isFull() ) {
            return false;
        } 
        else if (isEmpty()) {
            front = rear = 0;
        }
        else if (rear == size - 1) {
            rear = 0;
        } 
        else {
            rear++;
        }
        arr[rear] = x;
        currentSize++;
        return true;
    }


    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront() {
        // to check if the queue is empty!
        if(isEmpty()) {
            // cout << "Queue is empty !" << endl;
            return -1;
        }

        int popped = arr[front];
        if (front == rear) {
            front = -1;
            rear = 0;
        } else {
            if (front == size - 1) {
                front = 0;
            } else {
                front++;
            }
        }
        currentSize--;
        return popped;
    }



    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear() {
        // to check if the queue is empty!
        if(isEmpty()) {
            cout << "Queue is empty !" << endl;
            return -1;
        }

        int popped = arr[rear];
        if (front == rear) {
            front = -1;
            rear = 0;
        } else {
            if (rear == 0) {
                rear = size - 1;
            } else {
                rear--;
            }
        }
        currentSize--;
        return popped;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront() {
        if(isEmpty()) {
            return -1;
        } 
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear() {
        if(isEmpty()) {
            return -1;
        } 
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty() {
        return currentSize == 0;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull() {
        return currentSize == size;
    }
};

int main() {

    int N, Q;
    cout << "Enter the size and the number of the queries to be run in the deque : ";
    cin >> N >> Q;

    Deque deque(N);

    while(Q--) {
        int type, X;
        cout << "Enter the type of the deque operation : ";
        cin >> type;

        switch(type) {
            case 1 :
                cout << "Enter the value : ";
                cin >> X;
                cout << (deque.pushFront(X) ? "True" : "False") << endl;
                break;
            case 2:
                cout << "Enter the value : ";
                cin >> X;
                cout << (deque.pushRear(X) ? "True" : "False") << endl;
                break;
            case 3:
                cout << deque.popFront() << endl;
                break;
            case 4:
                cout << deque.popRear() << endl;
                break;
            case 5:
                cout << deque.getFront() << endl;
                break;
            case 6:
                cout << deque.getRear() << endl;
                break;
            case 7:
                cout << (deque.isEmpty() ? "True" : "False") << endl;
                break;
            case 8:
                cout << (deque.isFull() ? "True" : "False") << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}