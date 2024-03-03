// A node in a doubly linked list has : prev part, data part and next part.

#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node() {
        int val = this -> data;
        
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << val << endl << endl;
    }
};

// traversing a linked list
void print(Node* &head) {
    Node *temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// gives length of the doubly linked list
int getLength(Node* &head) {
    int len = 0;
    Node *temp = head;

    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
}


void InsertAtHead(Node* &head, int data) {
    // Creating a new node here for the data.
    Node *temp = new Node(data);

    if(head != NULL) {
        temp -> next = head;
        head -> prev = temp;
    }
    
    // give the correct position of the head.
    head = temp;
}


void InsertAtTail(Node* &tail, int data) {
    // creating a new node here for the data part.
    Node *temp = new Node(data);
    
    if(tail != NULL) {
        tail -> next = temp;
        temp -> prev = tail;
    }
    tail = temp;
}


void InsertAtAnyPosition(Node* &head, Node* &tail, int position,  int data) {
    if(position == 1) {
        InsertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    // The purpose of subtracting 1 in the condition count < position - 1 is to ensure that the loop stops when count becomes equal to position - 1. This is because, in the context of inserting a node at a specific position, you want to stop at the node just before the desired position so that you can correctly link the new node with the surrounding nodes during the insertion process. 
    while(count < position - 1) {
        temp = temp -> next;
        count++;
    }

    // inserting at the last
    if(temp -> next == NULL) {
        InsertAtTail(tail, data);
        return;
    }

    // creating a new node for the data part
    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}


void deleteNode(int position, Node* &head, Node* &tail) {
    
    // deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;

        temp -> next = NULL;
        // freeing the memory of the start node
        delete temp;
    }

    else {
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position) {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        if(curr -> next == NULL) {
            tail = prev;
            tail -> next = NULL;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main() {

    // Creating a new node
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    print(head);

    cout << "The length of the node is : " << getLength(head) << endl;

    InsertAtHead(head, 67);
    print(head);

    InsertAtTail(tail, 89);
    print(head);

    InsertAtAnyPosition(head, tail, 3, 47);
    print(head);

    InsertAtAnyPosition(head, tail, 1, 90);
    print(head);

    deleteNode(1, head, tail);
    print(head);

    deleteNode(3, head, tail);
    print(head);

    return 0;
}