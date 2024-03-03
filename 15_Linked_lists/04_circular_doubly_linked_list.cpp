
#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int val = this -> data;

        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << val << endl;
    }
};


void InsertNode(Node* &tail, int element, int data) {

}


void print(Node* tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is empty!" << endl;
    }

    
}

int main() {

    Node* node1 = new Node(10);
    Node* tail = NULL;

    InsertNode(tail, 7, 11);
    print(tail);

    return 0;
}