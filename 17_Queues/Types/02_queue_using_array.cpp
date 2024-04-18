#include <bits/stdc++.h>
using namespace std;

class Queue {
    private :
    int *arr;
    int qfront;
    int rear;
    int size;

    public :
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    
    bool isEmpty() {
        if(qfront == rear) {
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue is Full !" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if (qfront == rear) {
            return -1;
        } else {
            return arr[qfront];
        }
    }
};

int main() {

    Queue q;

    q.enqueue(17);
    q.enqueue(56);
    q.enqueue(39);
    q.enqueue(20);
    q.enqueue(40);

    cout << "Front of queue is : " << q.front() << endl;

    int poppedVal = q.dequeue();
    cout << "The popped value is : " << poppedVal << endl;

    if(q.isEmpty()) {
        cout << "Queue is empty !" << endl;
    } else {
        cout << "Queue is not empty !" << endl;
    }

    cout << "The queue values are : ";
    while(!q.isEmpty()) {
        cout << q.front() << " ";
        q.dequeue();
    }

    return 0;
}

// TC = O(1)
// SC = O()