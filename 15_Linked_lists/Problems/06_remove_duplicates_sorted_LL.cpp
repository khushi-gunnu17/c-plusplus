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


Node* uniqueSortedList(Node* &head) {
    // empty list
    if(head == NULL) {
        return NULL;
    }

    // non - empty list
    Node* curr = head;

    while(curr != NULL) {
        if((curr -> next != NULL) && curr -> data == curr -> next -> data) {

            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;

        } else {
            curr = curr -> next;
        }
    }

    return head;
}


int main() {

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail, 1);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 6);

    print(head);

    head = uniqueSortedList(head);
    print(head);

    return 0;
}

// T.C. = O(n)
// S.C. = O(1)