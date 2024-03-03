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
};


void InsertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}


void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);

    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


bool circular_or_not(Node* head) {
    // empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head) {
        temp = temp -> next;
    }

    if(temp == head) {
        return true;
    } else {
        return false;
    }
}





int main() {

    Node* node1 = new Node(5);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail, 4);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 9);
    InsertAtTail(tail, 2);

    print(head);

    if (circular_or_not(head)) {
        cout << "Linked list is circular in nature.";
    } else {
        cout << "The list is not circular.";
    }

    return 0;
}


// T.C = O(n)
// S.C. = O(1)


// Do it with Map standard template library 