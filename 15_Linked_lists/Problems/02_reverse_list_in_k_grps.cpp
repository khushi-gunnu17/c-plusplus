#include <iostream>
using namespace std;

class Node{
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


Node* reverse_K_nodes(Node* head, int k) {
    // base case
    if(head == NULL) {
        return NULL;
    }

    // step 1 : reverse first k nodes 
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;

    int count = 0;

    while(curr != NULL && count < k) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step 2: Reverse the remaining nodes only if there are more than k nodes 
    if(count < k) {
        Node* temp = prev;
        prev = NULL;
        while(temp != NULL) {
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }
    } else {
        // Step 3: Connect the reversed part to the remaining nodes
        head->next = reverse_K_nodes(next, k);
    }

    // step 3 : return head of reversed list
    return prev ? prev : head;
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

    head = reverse_K_nodes(head, 4);
    print(head);

    return 0;
}