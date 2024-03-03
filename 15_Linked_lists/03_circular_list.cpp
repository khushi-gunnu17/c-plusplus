
#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next  = NULL;
    }

    // destructor
    ~Node() {
        int value = this -> data;

        if(this -> next == NULL) {
            delete this -> next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl << endl;
    }
};


void InsertNode(Node* &tail, int element, int data) {
    // assuming that the element is not present in the list
    if(tail == NULL) {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    } 
    // non - empty list
    else {
        Node* curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;
        } 

        // element found and the curr is on the element
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void print(Node* tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is empty." << endl;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } 
    while(tail != temp);
    cout << endl;
}


void deleteNode(int element, Node* &tail) {
    // empty list
    if(tail == NULL) {
        cout << "List is already empty." << endl;
        return;
    } 
    // non - empty list
    else {
        Node* prev = tail;
        Node* curr = tail -> next;

        while(curr -> data != element) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 node linked list
        if(curr == prev) {
            tail = NULL;
        }

        // >= 2 linked list
        if(tail == curr) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}


int main() {

    Node* tail = NULL;

    // here, the element value doesn't matter, coz, the list is empty at the start.
    InsertNode(tail, 6, 3);
    print(tail);

    InsertNode(tail, 3, 5);
    print(tail);

    // InsertNode(tail, 5, 7);
    // print(tail);

    // InsertNode(tail, 7, 9);
    // print(tail);

    // InsertNode(tail, 5, 6);
    // print(tail);

    deleteNode(3, tail);
    print(tail);

    return 0;
}