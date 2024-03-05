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


void remove_duplicates(Node* head) {
    Node* curr = head;
    while (curr!= NULL) {
        
        Node* temp = curr -> next;
        Node* prev = curr;
        
        while( temp != NULL) {
            if(curr -> data == temp -> data) {
                prev -> next = temp -> next;
                delete temp;
                temp = prev -> next;
            } else {
                prev = temp;
                temp = temp -> next;
            }
        }
        curr = curr -> next;
    }
}

// Another step :
// Step 1 : Sort the LL
// Step 2 : Make use of the prev algorithm of sorted LL one.
// T.C. = O(nlogn)  S.C. = O(1)


int main() {

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail, 2);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 6);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 4);

    print(head);

    remove_duplicates(head);
    print(head);
    
    return 0;
}

// T.C. = O(nsquared)   (2 loops)
// S.C. = O(1) 

// H.W. = I have one circular linked list, split it into two halves. 