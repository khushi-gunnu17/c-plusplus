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

void SelectionSort(Node* &head) {
    Node* curr = head;

    while(curr != NULL) {
        Node* minNode = curr;
        Node* temp = curr -> next;

        // finding the minimum node in the rest of the list.
        while(temp != NULL) {
            if(temp -> data < minNode -> data) {
                minNode = temp;
            }
            temp = temp -> next;
        }

        // swapping the data between the minNode and curr
        int tempData = curr -> data;
        curr -> data = minNode -> data;
        minNode -> data = tempData;

        curr = curr -> next;
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

    SelectionSort(head);

    cout << "Sorted list using Selection sort : ";
    print(head);

    return 0;
}