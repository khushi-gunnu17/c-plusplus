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


Node* sortList(Node* &head) {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL) {
        if(temp -> data == 0) {
            zeroCount++;
        } else if(temp -> data == 1) {
            oneCount++;
        }
        else if(temp -> data == 2) {
            twoCount++;
        }

        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL) {
        if(zeroCount != 0) {
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0) {
            temp -> data = 1;
            oneCount--;
        } else if(twoCount != 0) {
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }

    return head;
}
// T.C. = O(n)
// S.C. = O(1)


// If data replacement is not allowed ?
void populate(Node* &tail, Node* curr) {
    tail -> next = curr;
    tail = curr;
}


Node* sort(Node* head) {
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    // pointers pointing at the heads
    Node* zeroTail = zeroHead;
    Node* oneTail = oneHead;
    Node* twoTail = twoHead;
    
    Node* curr = head;

    // creating separate list for 0s, 1s and 2s
    while(curr != NULL) {
        int value = curr -> data;

        if(value == 0) {
            populate(zeroTail, curr);
        } else if(value == 1) {
            populate(oneTail, curr);
        } else if(value == 2) {
            populate(twoTail, curr);
        }

        curr = curr -> next;
    }

    // merge 3 lists
    if(oneHead -> next != NULL)
    zeroTail -> next = oneHead -> next;
    else 
    zeroTail -> next = twoHead -> next;

    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    // Setting up head
    head = zeroHead -> next;

    // deleting dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

// T.C. = O(n)
// S.C. = O(1)


int main() {

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail, 2);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 0);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 1);

    print(head);

    // sortList(head);
    // print(head);

    // Not getting the correct answer even with this
    sort(head);
    print(head);

    return 0;
}