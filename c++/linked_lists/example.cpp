#include <iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }   
    cout << endl;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int data) {

    if(position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;

    int count = 1;
    while(count < position-1) {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail, data);
        return;
    }

    // creating a node for data 
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert; 
}

int main() {
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
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

    return 0;
}