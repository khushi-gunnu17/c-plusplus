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


int getLength(Node* head) {
    Node* temp = head;
    int count = 0;

    while(temp != NULL) {
        count++;
        temp = temp -> next;
    }

    return count;
}


Node* findMiddle(Node* head) {
    int len = getLength(head);

    int ans = (len/2);

    Node* temp = head;

    int cnt = 0;
    while(cnt < ans) {
        temp = temp -> next;
        cnt++;
    }

    return temp;
}


// Optimized solution - two runners

Node* getMiddle(Node* head) {

    if(head == NULL || head -> next == NULL) {
        return head;
    }

    // 2 nodes - needed or not ?
    if(head -> next -> next == NULL) {
        return head -> next;
    }

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;
    }

    return slow;
}


int main() {

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    InsertAtHead(head, 9);
    InsertAtHead(head, 8);

    InsertAtTail(tail, 11);
    InsertAtTail(tail, 12);

    print(head);

    // head = findMiddle(head);
    // print(head);


    head = getMiddle(head);
    print(head);

    return 0;
}

// T.C = O(n)
// S.C. = O(1)
