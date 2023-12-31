// Linked lists is a type of data structure which is a collection of nodes.
// a node contains some data and the address of another node.

/*
Why linked lists ?
--> dynamic data structure (can grow/ shrink the size at run time)
--> no memory wastage.
--> insertion na deletion easy here - no shift needed
--> no continuous storage needed.
*/

/*
Types of linked lists = 
--> singly LL
--> doubly LL
--> circular LL
--> circular doubly LL 
*/

// Insertion at any position in a linked list.

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor           // Didn't understand 
    ~Node() {
        int value = this -> data;
        // memory free 
        if(this -> next == NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// by reference because we want to make changes in the original list
void insertAtHead(Node* &head, int data) {

    // Create a new node
    Node *temp = new Node(data);    // in heap
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int data) {
    // Create a new node
    Node *temp = new Node(data);    // in heap
    tail -> next = temp;
    // tail = tail -> next;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int data) {
    // inserting at start 
    if(position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1) {
        temp = temp -> next;
        cnt++;
    }

    // inserting at last position 
    if(temp -> next == NULL) {
        insertAtTail(tail, data);
        return;
    }

    // Creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

// traverse a linked list 
void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }   
    cout << endl;
}

// deleting in a linked list 

void deleteNode(int position, Node* &head) {
    // deleting first or start node 
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        // memory free start node 
        delete temp;
    }
    else {
        // deleting any middle or last node 
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count <= position) {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        delete curr;
    }
}

int main() {

    // created a new node
    Node* node1 = new Node(10);       // In heap   // Last element
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // head pointed to node 1 at the starting
    Node* head = node1;
    // tail pointed to node 1 at the starting 
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 14);
    print(head);

    insertAtTail(tail, 87);
    print(head);

    insertAtPosition(tail, head, 3, 56);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    deleteNode(1, head);
    print(head);

    return 0;
}
